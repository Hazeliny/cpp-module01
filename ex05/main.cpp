/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:46:56 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 22:59:30 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
    Harl harl;

    harl.complain("ERROR");
    std::cout << std::endl;
    harl.complain("WARNING");
    std::cout << std::endl;
    harl.complain("INFO");
    std::cout << std::endl;
    harl.complain("DEBUG");
    std::cout << std::endl;
    harl.complain("nothing else");
    std::cout << std::endl;

    std::cout << "You can input something 5 times to make Harl complain." << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter the keyword to make Harl complain: ";
        std::string input;
        getline(std::cin, input);
        if (std::cin.eof())
        {
            std::cerr << "You have entered Ctrl-D, exiting..." << std::endl;
            exit(1);
        }
        harl.complain(input);
        std::cout << std::endl;
    }
    return (0);
}
