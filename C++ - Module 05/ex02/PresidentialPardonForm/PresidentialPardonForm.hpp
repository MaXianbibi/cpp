/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:56:20 by jmorneau          #+#    #+#             */
/*   Updated: 2023/07/09 14:59:40 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "../AForm/AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string		_target;
public:
	PresidentialPardonForm();
	~PresidentialPardonForm();

	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	PresidentialPardonForm & operator=(PresidentialPardonForm const & copy);
	const std::string	&getTarget() const;

	void execute(Bureaucrat const & executor) const;
};




#endif