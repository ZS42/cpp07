/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:04:17 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/03 00:05:43 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array(): _ptr_array(NULL), _size(0)
{
    std::cout <<"Default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size): _ptr_array(NULL), _size(size)
{
    if (size != 0)
    {
        try
        {
            _size = size;
            _ptr_array = new T[_size];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout <<"Parametric constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(Array const &old_object)
{
    try
    {
        _size = old_object._size;
        _ptr_array = new T[_size]; //deep copy
        for (unsigned int i = 0; i < _size; i++)
        {
            _ptr_array[i] = old_object._ptr_array[i];
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout <<"Copy constructor called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &object)
{
    if (this != &object)
    {
        try
        {
            delete[] _ptr_array;
            _size = object._size;
            _ptr_array = new T[object._size];
            for (unsigned int i = 0; i < object._size; i++)
                _ptr_array[i] = object._ptr_array[i];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    return (*this);
}

// why does this need t o return T instead of  Array<t>?????
template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
    if (index < 0 || index >= _size)
        throw IndexOutOfBoundsException();
    return (_ptr_array[index]);
}

// delete[] deallocates memory allocated by new[]
template <typename T>
Array<T>::~Array()
{
    std::cout <<"Destructor called" << std::endl;
    delete[] _ptr_array;
    _ptr_array = NULL;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return(_size);
}

template <typename T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw()
{
    return "Index out of bounds";
}
