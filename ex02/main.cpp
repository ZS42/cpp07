/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:42 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/02 23:50:37 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    std::cout << BLUE << "[USING DEFAULT CONSTRUCTOR]" << std::endl;
    Array<int> emptyArray;
    std::cout << emptyArray.size() << std::endl;
    std::cout << GREEN << "[USING PARAMETRIC CONSTRUCTOR]" << std::endl;
    Array <int> a(2);
    std::cout << "size: " << a.size() << std::endl;
    a[0] = 42;
    a[1] = 24;
    for (unsigned int i = 0; i < 2; i++)
        std::cout << a[i] << std::endl;
    std::cout << RED << "[USING COPY CONSTRUCTOR]" << std::endl;
    Array<int> b(a);
    for (unsigned int i = 0; i < 2; i++)
        std::cout << b[i] << std::endl;
    std::cout << YELLOW << "[MODIFYING ORIGINAL ARRAY]" << std::endl;
    a[0] = 55;
    std::cout << "a: " << a[0] << std::endl;
    std::cout << "b: " << b[0] << std::endl;
    std::cout << MAGENTA << "[MODIFYING COPY ARRAY]" << std::endl;
    b[0] = 17;
    std::cout << "a: " << a[0] << std::endl;
    std::cout << "b: " << b[0] << std::endl;
    std::cout << BLUE << "[ACCESSING WITH WRONG INDEX]" << std::endl;
    // a[3] = 3;
    b[-1] = 0; 
    std::cout << RESET << std::endl;
}