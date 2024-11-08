/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:26:35 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 13:00:59 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
    private:
        std::string name;
};

// to create a Zombie object on the heap
// it remains in memory until explicitly deleted using delete
// Heap allocation is useful for objects that need to persist beyond the function's scope or require dynamic lifespan control
Zombie* newZombie( std::string name );
// to create a Zombie object on the stack
// This object is automatically destroyed when randomChump completes
// Stack allocation is ideal for short-lived objects
void randomChump( std::string name );

#endif
