/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:43:25 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 00:13:22 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern& OtherIntern)
{
	*this = OtherIntern;
}

Intern& Intern::operator=(const Intern& OtherIntern)
{
	if (this != &OtherIntern)
	{
		
	}
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern : destractor called" << std::endl;
}

/* function to implement */

AForm*	Intern::makeShrubberyCreation()
{
	return (new ShrubberyCreationForm());
}

AForm*	Intern::makePresidentialPardon()
{
	return (new PresidentialPardonForm());
}

AForm*	Intern::makeRobotomyRequest()
{
	return (new RobotomyRequestForm());
}

AForm* Intern::makeForm(std::string name_form, std::string target_form)
{
	int i;
	AForm* (Intern::*funcptr[3])(void) = {&Intern::makeRobotomyRequest, &Intern::makeShrubberyCreation, &Intern::makePresidentialPardon};
    std::string Forms[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    for (i = 0; i < 3; i++)
    {
        if (Forms[i] == name_form)
		{
			std::cout << "Intern creates " << target_form << std::endl;
			(this->*funcptr[i])();
			break;
		}
    }
	if (i == 3)
		std::cout << "Intern don't create any form " << std::endl;
	return NULL;
}
