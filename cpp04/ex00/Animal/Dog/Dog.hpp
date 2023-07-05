/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:55 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 11:28:01 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "../Animal.hpp"

class Dog : public Animal
{
private:
    
public:
    Dog();
    ~Dog();

    Dog(Dog const &copy);
    Dog &operator=(Dog const &copy);

    void    makeSound() const;
};

#endif