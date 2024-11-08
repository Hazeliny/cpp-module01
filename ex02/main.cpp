/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linyao <linyao@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:56:02 by linyao            #+#    #+#             */
/*   Updated: 2024/11/08 15:16:46 by linyao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "The memory address of the string: " << &str << std::endl;
    std::cout << "The memory address held by the string pointer: " << stringPTR << std::endl;
    std::cout << "The memory address held by the string reference: " << &stringREF << std::endl;
    
    std::cout << "The value of the string: " << str << std::endl;
    std::cout << "The value pointed to by the string pointer: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by the string reference: " << stringREF << std::endl;

    return 0;
}

// declaration of pointer and reference to a string: int* p / int& ref
// need to initialization? NO (pointer) / YES (reference)
// reasignable? yes (pointer) / no (reference)
// can be null? yes (pointer)(nullptr) / no (reference)
// desreference? (*p) / ref(no necessary)
// used with dynamic memory allocation? yes (pointer)(new, delete) / no (reference)
// arithmetics operations? yes (pointer)(++p, p++, p+1, p-1, p[i], *p=10) / no (reference)
