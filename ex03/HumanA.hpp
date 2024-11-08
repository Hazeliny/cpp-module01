/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:43:34 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 17:04:51 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon& _weapon; // 这里引用始终指向的是同一个Weapon对象实例，但Weapon对象的内容是可以更改的
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void attack(void);    
};
