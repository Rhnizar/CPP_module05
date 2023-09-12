/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:42:05 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/12 12:08:25 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string name;
		bool	isSigned;
		const int gradeSign;
		const int gradeExecute;
	public:
		AForm();//default destractor
		AForm(const std::string Name, const int GradeSign, const int GradeExecute);
		AForm(const AForm& otherAFORM);//copy constractor
		AForm& operator=(const AForm& otherAFORM);//copy assignement operator overloading 
		~AForm();// destractor

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
		virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& os, AForm &aform);

#endif