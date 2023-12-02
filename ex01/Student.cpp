/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:19:44 by zsyyida           #+#    #+#             */
/*   Updated: 2023/11/30 00:19:31 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student.hpp"

Student::Student()
{
    // std::cout << "Student default Constructor called." << std::endl;
}

Student::Student(int studentNumber)
{
    _studentNumber = studentNumber;
    // std::cout << "Student parametric Constructor called." << std::endl;
}

Student::Student(const Student &object)
{
    // std::cout << "Student copy Constructor called." << std::endl;
    *this = object;
}

Student &Student::operator=(Student const &object)
{
    if (this != &object)
    {
        _studentNumber = object._studentNumber;
    }
    // std::cout << "Student copy operator called." << std::endl;
    return(*this);
}

Student::~Student()
{
    // std::cout << "Student destructor called." << std::endl;
}

void Student::setStudentNumber(int n)
{
    _studentNumber = n;
}

int Student::get_studentNumber() const
{
    return(_studentNumber);
}