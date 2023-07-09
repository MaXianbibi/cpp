/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:44:24 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 14:49:40 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "../AForm/AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string		_target;
public:
	RobotomyRequestForm();
	~RobotomyRequestForm();

	RobotomyRequestForm(const std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & copy);

	// get target

	const std::string	&getTarget() const;
	void execute(Bureaucrat const & executor) const;

};




#endif