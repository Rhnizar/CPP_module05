/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:43:14 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 00:03:00 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();//default constractor
		Intern(const Intern& OtherIntern);//copy constractor
		Intern& operator=(const Intern& OtherIntern);//copy assignement operator overloading
		~Intern();

		AForm	*makeForm(std::string name_form, std::string target_form);

		
		AForm*	makeShrubberyCreation();
		AForm*	makePresidentialPardon();
		AForm*	makeRobotomyRequest();
};
