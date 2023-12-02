/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:38 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/02 23:44:48 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>

# define RED "\033[0;31m"
# define GREEN "\033[38:5:2m"
# define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define MAGENTA "\033[35m"
# define RESET "\033[0m"

// can put function definitions in header or .tpp but not .cpp
// bc .cpp is not handled at compile time and compiler needs this info
// if using .tpp include it at end of header file. It is best practise 
// to use include guards for .tpp also
template <typename T> class Array
{
    T *_ptr_array;
    unsigned int _size;
    unsigned int _index;
    public:
        Array();
        Array(unsigned int size);
        Array(Array const &object);
        Array<T> &operator=(Array const &object);
        T &operator[](unsigned int index) const; 
        ~Array(); 
        unsigned int size() const;
        class IndexOutOfBoundsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#include "Array.tpp"