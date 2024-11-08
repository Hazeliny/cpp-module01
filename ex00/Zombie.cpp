/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:24:12 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 13:26:02 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie object " << this->name << " has been created." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie Object " << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
