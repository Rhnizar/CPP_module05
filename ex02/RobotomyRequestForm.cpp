/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:31:56 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/11 15:35:27 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("def", false, 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& otherRobotomyRequestForm):AForm(otherRobotomyRequestForm)
{
	*this = otherRobotomyRequestForm;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& otherRobotomyRequestForm)
{
	if (this != &otherRobotomyRequestForm)
	{
		
	}

	return *this;
}

/* function to implement */

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() && executor.getGrade() < this->getGradeExecute())
	{
		
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();
}
