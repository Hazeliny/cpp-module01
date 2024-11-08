/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:46:56 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 23:35:46 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    Harl harl;

    if (ac == 2)
        harl.complain(av[1]);
    else
        harl.complain("insignificant");
    
    return (0);
}
