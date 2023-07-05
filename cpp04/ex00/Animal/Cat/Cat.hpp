/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:19:49 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 11:28:35 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "../Animal.hpp"

class Cat : public Animal
{
private:
    
public:
    Cat();
    ~Cat();

    Cat(Cat const &copy);
    Cat &operator=(Cat const &copy);

    void    makeSound() const;
};

#endif