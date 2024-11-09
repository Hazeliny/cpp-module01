/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:11:15 by linyao            #+#    #+#             */
/*   Updated: 2024/11/09 11:19:33 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define DEFAULT "\001\033[0;39m\002"
# define RED "\001\033[1;91m\002"
# define YELLOW "\001\033[1;93m\002"
# define PINK "\001\033[1;35m\002"
# define GREEN "\001\033[1;32m\002"

#include <iostream>
#include <cstdlib>

class Harl {
  private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

  public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};
