/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:45:03 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 19:12:44 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace_infile(const std::string& filename, const std::string& s1, const std::string& s2) {
    if (s1.empty())
    {
        std::cerr << "Error: The string to replace (s1) cannot be empty." <<std::endl;
        return ;
    }
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: Unable to open input file: " << filename << std::endl;
        return ;
    }
    std::string new_filename = filename + ".replace";
    std::ofstream outfile(new_filename.c_str());
    if (!outfile)
    {
        std::cerr << "Error: Unable to create output file: " << new_filename << std::endl;
        return ;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        std::string new_line;
        size_t pos = 0;
        while ((pos = line.find(s1)) != std::string::npos)
        {
            new_line += line.substr(0, pos);
            new_line += s2;
            line = line.substr(pos + s1.length());
        }
        new_line += line;
        outfile << new_line << std::endl;
    }
}

int main(int ac, char **av) {
    if (ac != 4)
    {
        std::cerr << "Warning: input arguments in format: <infile> <S1> <S2>" << std::endl;
        return 1;
    }
    const std::string filename = av[1];
    const std::string s1 = av[2];
    const std::string s2 = av[3];

    replace_infile(filename, s1, s2);
    
    return 0;
}
