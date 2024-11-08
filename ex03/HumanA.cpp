/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:43:13 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 16:36:14 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon) {
    std::cout << "HumanA " << this->_name << " created with weapon " << this->_weapon.getType() << std::endl;
}
HumanA::~HumanA() {
    std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}
void HumanA::attack() {
    std::cout << this->_name << " attacks with his/her " << this->_weapon.getType() << std::endl;
}
