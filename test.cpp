/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:55:05 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 13:57:25 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	int x = 0; int y = 0;
	std::cout << "enter number : " ;
	std::cin >> x;
	std::cout << std::endl;

	std::cout << "enter number : " ;
	std::cin >> y;
	std::cout << std::endl;

	std::cout << "result is : " << x / y; 
	return 0;
}