/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:09 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 15:37:06 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat br("rida", 149);
		br.DecrementGrade();
		br.DecrementGrade();
		// br.IncrementGrade();
		std::cout << br.getName() << std::endl;
		std::cout << br.getGrade() << std::endl;
	}
	catch(std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
