/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:42:05 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/10 19:26:38 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool	isSigned;
		const int gradeSign;
		const int gradeExecute;
	public:
		Form();//default destractor
		Form(const Form& otherForm);//copy constractor
		Form& operator=(const Form& otherForm);//copy assignement operator overloading 
		~Form();// destractor

		std::string	getName() const;
		bool getSigned() const;
		int	getGradeSign() const;
		int	getGradeExecute() const;

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
		
		void	beSigned(Bureaucrat& bureaucrat);
};

std::ostream& operator<<(std::ostream& os, Form &form);

#endif