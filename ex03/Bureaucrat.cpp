/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:38:05 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:02:02 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("rida"), Grade(1)
{}

Bureaucrat::Bureaucrat(const std::string Name, int grade) : name(Name)
{
	std::cout << "Bureaucrat: constractor the parameters called" << std::endl;
	if (grade < 1)
		throw  GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException(); 
	else
		Grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &otherBureaucrat): name(otherBureaucrat.name)
{
	std::cout << "Bureaucrat: copy constractor called" << std::endl;
	*this = otherBureaucrat;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &otherBureaucrat)
{
	std::cout << "Bureaucrat: copy assignement operator overloading called" << std::endl;
	if (this != &otherBureaucrat)
	{
		Grade = otherBureaucrat.Grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: destractor called" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	return name;
}

int	Bureaucrat::getGrade() const
{
	return Grade;
}

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName();
	os << ", bureaucrat grade ";
	os << bureaucrat.getGrade();
	return os;
}


/*   function to implement */

void	Bureaucrat::IncrementGrade()
{
	if (Grade == 1)
	{
		throw GradeTooHighException();
	}
	else
		Grade--;
}

void	Bureaucrat::DecrementGrade()
{
	if (Grade == 150)
	{
		throw GradeTooLowException();
	}
	else
		Grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High\n";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low\n";
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << "signed " << form.getName();
	}
	catch(Bureaucrat::GradeTooLowException& ex)
	{
		std::cout << name << "couldn’t sign" << form.getName() << "because" << ex.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() <<  "executed" << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}