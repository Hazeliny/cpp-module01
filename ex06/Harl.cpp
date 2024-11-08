/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:11:41 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 23:42:25 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug() {
    std::cout << PINK << "[DEBUG] " << DEFAULT;
    std::cout<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
    std::cout << "I really do!" << std::endl;
}

void Harl::info() {
    std::cout << GREEN << "[INFO] " << DEFAULT;
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << YELLOW << "[WARNING] " << DEFAULT;
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << RED << "[ERROR] " << DEFAULT;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    void (Harl::*func[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string level_str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;
    
    for (i = 0; i < 4; i++)
    {
        if (level_str[i] == level)
            break ;
    }
    switch(i)
    {
        case(0):
            (this->*func[0])();
        case(1):
            (this->*func[1])();
        case(2):
            (this->*func[2])();
        case(3):
            (this->*func[3])();
            break ;
        default:
            std::cout << GRAY <<  "[ Probably complaining about insignificant problems ]" << DEFAULT << std::endl;
            break ;
    }
}