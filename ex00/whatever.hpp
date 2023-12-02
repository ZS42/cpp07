/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:25 by zsyyida           #+#    #+#             */
/*   Updated: 2023/11/29 18:13:29 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> 
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

template <typename T> T min(T x, T y)
{
    return (x < y) ? x : y;
}

template <typename T> T max(T x, T y)
{
    return(x > y) ? x : y;
}