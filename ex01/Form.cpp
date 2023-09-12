/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:27:01 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:07:17 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():name("def_form"), isSigned(false), gradeSign(1), gradeExecute(1)
{}

Form::Form(const std::string Name, const int GradeSign, const int GradeExecute): name(Name), gradeSign(GradeSign), gradeExecute(GradeExecute) 
{}

Form::Form(const Form &otherForm): name(otherForm.name), gradeSign(otherForm.gradeSign), gradeExecute(otherForm.gradeExecute)
{
	std::cout << "Form: copy constractor called" << std::endl;
	*this = otherForm;
}

Form& Form::operator=(const Form &otherForm)
{
	std::cout << "Form: copy assignement operator overloading called" << std::endl;
	if (this != &otherForm)
	{
		isSigned = otherForm.isSigned;
	}
	return *this;
}

Form::~Form()
{
	std::cout << "Form: destractor called" << std::endl;
}

std::string Form::getName() const
{
	return name;
}

int	Form::getGradeSign() const
{
	return gradeSign;
}

int	Form::getGradeExecute() const
{
	return gradeExecute;
}

bool Form::getSigned() const
{
	return isSigned;
}

std::ostream& operator<<(std::ostream& os, Form &form)
{
	os << "name : " << form.getName() << std::endl;
	os << "Signed : " << form.getSigned() << std::endl;
	os << "GradeSign : " << form.getGradeSign() << std::endl;
	os << "GradeExecute : " << form.getGradeExecute() << std::endl;
	return os;
}


/*   function to implement */

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High\n";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low\n";
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeSign)
	{
		isSigned= true;
	}
	else
		throw GradeTooLowException();
}
