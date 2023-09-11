/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:40:52 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/11 15:43:31 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("def", false, 72, 45)
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
		
	}
	else
		throw PresidentialPardonForm::GradeTooLowException();
}
