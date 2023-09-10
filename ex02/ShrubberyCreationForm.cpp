/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:55:34 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 22:51:25 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("def", false, 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& otherShrubberyCreationForm)
{
	*this = otherShrubberyCreationForm;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& otherShrubberyCreationForm)
{
	if (this != &otherShrubberyCreationForm)
	{
		
	}

	return *this;
}

/* function to implement */

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << "testttttt\n";
}