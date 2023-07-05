/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:19:49 by justinmorne       #+#    #+#             */
/*   Updated: 2023/07/05 12:19:24 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "../WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    
public:
    WrongCat();
    ~WrongCat();

    WrongCat(WrongCat const &copy);
    WrongCat &operator=(WrongCat const &copy);

    void    makeSound() const;
};

#endif