/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:03:33 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 17:06:45 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
    this->_weapon = NULL;
    std::cout << "HumanB " << this->_name << " created without weapon NULL" << std::endl;    
}

HumanB::~HumanB() {
    std::cout << "HumanB " << this->_name << " destroyed" << std::endl;    
}

void HumanB::attack() {
    if (_weapon)
        std::cout << "HumanB " << this->_name << " attacks with his/her " << this->_weapon->getType() << std::endl;
    else
        std::cout << "HumanB " << this->_name << " has no weapon to attacks with" << std::endl; 
}

void HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
    std::cout << "HumanB " << this->_name << " got a new weapon " << this->_weapon->getType() << std::endl;    
}
