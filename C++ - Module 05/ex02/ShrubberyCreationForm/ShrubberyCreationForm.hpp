/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:24:09 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 14:30:29 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "../AForm/AForm.hpp"
#include <fstream>


class ShrubberyCreationForm : public AForm
{
private:
	std::string		_target;
public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();

	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & copy);
	
	void beSigned(const Bureaucrat & b);

	const std::string	&getTarget() const;
	
	void execute(Bureaucrat const & executor) const;
};



#endif