/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 13:34:21 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 22:33:51 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;
class Bureaucrat
{
	private:
		const std::string name;
		int	Grade;
	public :
		Bureaucrat();//default constractor
		Bureaucrat(const std::string Name, int grade);// constractor the parameteres
		Bureaucrat(const Bureaucrat &otherBureaucrat);//copy constractor
		Bureaucrat& operator=(const Bureaucrat &otherBureaucrat);//copy assignement operator overloading 
		~Bureaucrat();// destractor
		const std::string getName() const;
		int			getGrade() const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		void IncrementGrade();
		void DecrementGrade();
		void signForm(AForm& form);
		void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream& os, Bureaucrat &bureaucrat);

#endif