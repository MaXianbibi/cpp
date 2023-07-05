/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:18:03 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 11:28:13 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
    
public:
    Animal();
    ~Animal();
    Animal(Animal const &copy);
    Animal &operator=(Animal const &copy);

    virtual void   makeSound() const;
};

#endif