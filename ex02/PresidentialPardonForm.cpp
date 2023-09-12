/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:40:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:12:29 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("def", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& otherPresidentialPardonForm):AForm(otherPresidentialPardonForm)
{
	*this = otherPresidentialPardonForm;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& otherPresidentialPardonForm)
{
	if (this != &otherPresidentialPardonForm)
	{
		
	}

	return *this;
}

/* function to implement */

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() && executor.getGrade() < this->getGradeExecute())
	{
		std::cout << executor.getName() << "has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else
		throw PresidentialPardonForm::GradeTooLowException();
}
