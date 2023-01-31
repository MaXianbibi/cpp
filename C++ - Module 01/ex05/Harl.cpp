/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justinmorneau <justinmorneau@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 01:17:01 by justinmorne       #+#    #+#             */
/*   Updated: 2023/01/31 02:14:32 by justinmorne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    ptr_complain[0] = &Harl::DEBUG;
    ptr_complain[1] = &Harl::INFO;
    ptr_complain[2] = &Harl::WARNING;
    ptr_complain[3] = &Harl::ERROR;
}

Harl::~Harl()
{
}

void Harl::DEBUG(void)
{
    if (this->level != "DEBUG")
    {
        (this->*ptr_complain[1])();
        return;
    }

    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}
void Harl::INFO(void)
{
    if (this->level != "INFO")
    {
        (this->*ptr_complain[2])();
        return;
    }
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::WARNING(void)
{
    if (this->level != "WARNING")
    {
        (this->*ptr_complain[3])();
        return;
    }
    
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::ERROR(void)
{
    if (this->level != "ERROR")
    {
        std::cout << "hmm" << std::endl;
        return;
    }

    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    this->level = level;
    (this->*ptr_complain[0])();
}