/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:33:45 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 14:45:38 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    int N = 9;
    Zombie* zombies;

    zombies = zombieHorde(N, "brutal zombie");
    if (zombies == NULL)
        return 1;
    for (int i = 0; i < N; i++)
        zombies[i].announce();
    delete[] zombies;
    return 0;
}
