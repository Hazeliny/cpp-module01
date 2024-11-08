/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:16:27 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 14:48:26 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Zombie object (NULL)" << " has been created." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie Objects " << this->name << " have been destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}
