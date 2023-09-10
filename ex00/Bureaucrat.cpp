/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:38:05 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 15:31:20 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("rida"), Grade(1)
{}

Bureaucrat::Bureaucrat(const std::string Name, int grade) : name(Name)
{
	if (grade < 1)
		throw  GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException(); 
	else
		Grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat &otherBureaucrat)
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

std::string Bureaucrat::getName() const
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
