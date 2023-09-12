/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 20:55:34 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:14:32 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():AForm("def", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& otherShrubberyCreationForm):AForm(otherShrubberyCreationForm)
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
	if (this->getSigned() && executor.getGrade() < this->getGradeExecute())
	{
		std::ofstream	outputFile;//Declare output file:
		std::string		ouputFileName = executor.getName() + "_shrubbery";
		
		outputFile.open(ouputFileName.c_str());//Open the file:
		if (!outputFile.is_open())//Check if the file was successfully opened:
		{
			std::cerr << "Error opening outputFile file." << std::endl;
			return;
		}
		outputFile << "   ^   \n";
		outputFile << "  ^^^   \n";
		outputFile << " ^^^^^  \n";
		outputFile << "^^^^^^^ \n";
		outputFile << "^^^^^^^^\n";
		outputFile << "   |    \n";

		outputFile.close();
	}
	else
		throw ShrubberyCreationForm::GradeTooLowException();
}