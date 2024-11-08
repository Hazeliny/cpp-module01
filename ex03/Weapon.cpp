/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:20:03 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 16:59:42 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
    return (this->_type);
}

void Weapon::setType(const std::string& type) {
    this->_type = type;
}
