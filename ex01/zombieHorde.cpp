/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:14:22 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 14:42:13 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    if (N < 1) {
        std:: cout << "Error: N must be greater than 0." << std::endl;
        return NULL;
    }
    Zombie* zombies = new Zombie[N];
    if (zombies == NULL)
    {
        std::cout << "Memory allocation failed." << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return zombies;
}
