/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:09 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 16:12:40 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat br("rida", 1);
		// br.DecrementGrade();
		// br.DecrementGrade();
		// br.IncrementGrade();
		// std::cout << br.getName() << std::endl;
		// std::cout << br.getGrade() << std::endl;

		std::cout << br;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
