/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:38:05 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/09 14:00:57 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	name = "rida";
	Grade = 1;
}

Bureaucrat::Bureaucrat(Bureaucrat &otherBureaucrat)
{
	std::cout << "Bureaucrat: copy constractor called" << std::endl;
	*this = otherBureaucrat;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &otherBureaucrat)
{
	std::cout << "Bureaucrat: copy assignement operator overloading called" << std::endl;
	if (this != &otherBureaucrat)
	{
		name = otherBureaucrat.name;
	}
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat: destractor called" << std::endl;
}

std::string Bureaucrat::getName()
{
	return Name;
}

int	getGrade()
{
	return Grade;
}

std::string& operator<<(Bureaucrat &bureaucrat)
{
	std::ostream os;
	os << bureaucrat.getName();
	os << ", bureaucrat grade ";
	os << bureaucrat.getGrade();
	
}