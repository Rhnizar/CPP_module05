/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:09 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 22:44:51 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		AForm *F = new ShrubberyCreationForm();
		std::cout << *F;
		// Bureaucrat br("rida", 149);
		
		// Bureaucrat br2(br);
		// std::cout << br2.getName() << std::endl;
		// br.DecrementGrade();
		// br.DecrementGrade();
		// // br.IncrementGrade();
		// std::cout << br.getName() << std::endl;
		// std::cout << br.getGrade() << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
