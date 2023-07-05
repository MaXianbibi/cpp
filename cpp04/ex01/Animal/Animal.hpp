/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:18:03 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:50:50 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
    
public:
    Animal();
    virtual ~Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &copy);

    virtual void   makeSound() const;
	std::string    getType() const;
};

#endif