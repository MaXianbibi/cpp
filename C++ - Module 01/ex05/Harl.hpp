/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 01:16:08 by justinmorne       #+#    #+#             */
/*   Updated: 2023/01/31 02:08:41 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

class Harl
{
private:
    void DEBUG(void);
    void INFO(void);
    void WARNING(void);
    void ERROR(void);
    void (Harl::*ptr_complain[4])(void);
    std::string level;    


public:
    void complain( std::string level );
    Harl();
    ~Harl();
};

