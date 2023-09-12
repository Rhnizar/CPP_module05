/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:27:01 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:13:54 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm():name("def_AForm"), isSigned(false), gradeSign(1), gradeExecute(1)
{}

AForm::AForm(const std::string Name, const int GradeSign, const int GradeExecute): name(Name), gradeSign(GradeSign), gradeExecute(GradeExecute) 
{}

AForm::AForm(const AForm &otherAForm): name(otherAForm.name), gradeSign(otherAForm.gradeSign), gradeExecute(otherAForm.gradeExecute)
{
	std::cout << "AForm: copy constractor called" << std::endl;
	*this = otherAForm;
}

AForm& AForm::operator=(const AForm &otherAForm)
{
	std::cout << "AFORM: copy assignement operator overloading called" << std::endl;
	if (this != &otherAForm)
	{
		isSigned = otherAForm.isSigned;
	}
	return *this;
}

AForm::~AForm()
{
	std::cout << "AFORM: destractor called" << std::endl;
}

std::string AForm::getName() const
{
	return name;
}

int	AForm::getGradeSign() const
{
	return gradeSign;
}

int	AForm::getGradeExecute() const
{
	return gradeExecute;
}

bool AForm::getSigned() const
{
	return isSigned;
}

std::ostream& operator<<(std::ostream& os, AForm &aform)
{
	os << "name : " << aform.getName() << std::endl;
	os << "Signed : " << aform.getSigned() << std::endl;
	os << "GradeSign : " << aform.getGradeSign() << std::endl;
	os << "GradeExecute : " << aform.getGradeExecute() << std::endl;
	return os;
}


/*   function to implement */

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High\n";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low\n";
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() <= gradeSign)
	{
		isSigned= true;
	}
	else
		throw GradeTooLowException();
}
