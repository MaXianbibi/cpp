/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:55 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:31:43 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../Animal.hpp"
#include "../../Brain/Brain.hpp"

class Dog : public Animal
{
private:
    Brain   *brain;
public:
    Dog();
    ~Dog();

    Dog(Dog const &copy);
    Dog &operator=(Dog const &copy);

    void    makeSound() const;
};

#endif