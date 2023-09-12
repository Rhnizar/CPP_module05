/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:31:56 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:11:03 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():AForm("def", 72, 45)
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
		if (std::rand() % 2 == 0)
			std::cout << executor.getName() << "has been robotomized" << std::endl;
		else
			std::cout << "robotomy failed." << std::endl;
	}
	else
		throw RobotomyRequestForm::GradeTooLowException();
}
