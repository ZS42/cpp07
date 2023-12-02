/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:19:38 by zsyyida           #+#    #+#             */
/*   Updated: 2023/11/29 23:11:20 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Student
{
    int _studentNumber;
    public:
        Student();
        Student(int studentNumber);
        Student(Student const &object);
        Student &operator=(Student const &object); 
        ~Student(); 
        void setStudentNumber(int n);
        int get_studentNumber() const;
};