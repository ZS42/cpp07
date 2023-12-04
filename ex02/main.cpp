/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:42 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/04 14:59:48 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"

// int main()
// {
//     std::cout << BLUE << "[USING DEFAULT CONSTRUCTOR]" << std::endl;
//     Array<int> emptyArray;
//     std::cout << emptyArray.size() << std::endl;
//     std::cout << GREEN << "[USING PARAMETRIC CONSTRUCTOR]" << std::endl;
//     Array <int> a(2);
//     std::cout << "size: " << a.size() << std::endl;
//     a[0] = 42;
//     a[1] = 24;
//     for (unsigned int i = 0; i < 2; i++)
//         std::cout << a[i] << std::endl;
//     std::cout << RED << "[USING COPY CONSTRUCTOR]" << std::endl;
//     Array<int> b(a);
//     for (unsigned int i = 0; i < 2; i++)
//         std::cout << b[i] << std::endl;
//     std::cout << YELLOW << "[MODIFYING ORIGINAL ARRAY]" << std::endl;
//     a[0] = 55;
//     std::cout << "a: " << a[0] << std::endl;
//     std::cout << "b: " << b[0] << std::endl;
//     std::cout << MAGENTA << "[MODIFYING COPY ARRAY]" << std::endl;
//     b[0] = 17;
//     std::cout << "a: " << a[0] << std::endl;
//     std::cout << "b: " << b[0] << std::endl;
//     std::cout << BLUE << "[ACCESSING WITH WRONG INDEX]" << std::endl;
//     // a[3] = 3;
//     b[-1] = 0; 
//     std::cout << RESET << std::endl;
// }


#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        std::cout << MAGENTA << "[TESTING DEEP COPY ARRAY WITH COPY ASSIGNMENT OPERATOR]" << std::endl;
        std::cout <<"numbers: " << numbers[2] << std::endl;
        Array<int> tmp = numbers;
        tmp[2] = 5;
        std::cout <<"tmp: " << tmp[2] << std::endl;
        std::cout <<"numbers: " << numbers[2] << std::endl;
        std::cout << YELLOW << "[TESTING DEEP COPY ARRAY WITH COPY CONSTRUCTOR]" << std::endl;
        std::cout <<"tmp: " << tmp[2] << std::endl;
        Array<int> test(tmp);
        test[2] = 33;
        std::cout <<"tmp: " << tmp[2] << std::endl;
        std::cout <<"test: " << test[2] << std::endl;
        std::cout << RESET;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << BLUE <<"numbers: " << numbers[i] << std::endl;
    //     std::cout << RED << "mirror: " << mirror[i] << std::endl;
    // }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    // for (int i = 0; i < MAX_VAL; i++)
    // {
    //     std::cout << BLUE <<"numbers: " << numbers[i] << std::endl;
    //     std::cout << RED << "mirror: " << mirror[i] << std::endl;
    // }
    delete [] mirror;//
    return 0;
}