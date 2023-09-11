/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:59:13 by rrhnizar          #+#    #+#             */
/*   Updated: 2023/09/11 13:21:27 by rrhnizar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm& otherShrubberyCreationForm);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& otherShrubberyCreationForm);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif