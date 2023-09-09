/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:21 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/09 14:00:43 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string name;
		int	Grade;
	public :
		Bureaucrat();//default constractor
		Bureaucrat(Bureaucrat &otherBureaucrat);//copy constractor
		Bureaucrat& operator=(Bureaucrat &otherBureaucrat);//copy assignement operator overloading 
		~Bureaucrat();// destractor
		std::string getName();
		int			getGrade();

		void GradeTooHighException();
		void GradeTooLowException();

};

std::ostream& operator<<(Bureaucrat &bureaucrat);

#endif