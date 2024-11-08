/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:19:41 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 17:02:54 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon {
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        const std::string& getType(void) const;
        void setType(const std::string& type); // 值传递会产生临时拷贝，为避免拷贝提高性能应使用引用传递      
};
