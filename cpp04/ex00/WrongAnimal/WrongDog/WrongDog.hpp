/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:21:55 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:19:18 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "../WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
private:
    
public:
    WrongDog();
    ~WrongDog();

    WrongDog(WrongDog const &copy);
    WrongDog &operator=(WrongDog const &copy);

    void    makeSound() const;
};

#endif