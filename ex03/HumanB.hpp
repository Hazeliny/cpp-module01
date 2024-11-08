/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:02:03 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 17:06:24 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB {
    private:
        std::string _name;
        Weapon* _weapon; //因为它需要延迟初始化，且指针可更改，可指向新的Weapon实例，更灵活
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon& weapon);
};
