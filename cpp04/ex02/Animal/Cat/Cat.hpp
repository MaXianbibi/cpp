/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:19:49 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:33:23 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../Animal.hpp"
#include "../../Brain/Brain.hpp"

class Cat : public Animal
{
private:
    Brain   *brain;
public:
    Cat();
    ~Cat();

    Cat(Cat const &copy);
    Cat &operator=(Cat const &copy);

    void    makeSound() const;
};

#endif