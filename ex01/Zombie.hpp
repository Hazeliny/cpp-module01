/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:17:51 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 14:25:33 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void) const;
        void setName(std::string name);
    private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );
