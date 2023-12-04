/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:28 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/03 01:24:03 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
# define RESET "\033[0m"

template <typename T>
void print_array(T &a)
{
    std::cout << a << std::endl;
}

// template <typename T>
// void print_add_array(T a)
// {
//     std::cout << a + 1 << std::endl;
// }

// why const &??
template <typename T> 
void iter(T *a,int len, void (*fn)(T const&))
{
    for (int i = 0; i < len; i++)
        fn(a[i]);
}