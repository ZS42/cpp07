/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:31 by zsyyida           #+#    #+#             */
/*   Updated: 2023/12/03 01:25:20 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Student.hpp"

// overload of << to print out stored student number in arrray of class Student
std::ostream &	operator<<( std::ostream & out, const Student & t)
{
	out << t.get_studentNumber();
	return (out);
}

int main(void)
{
    int array1[5] ={1,2,3,4,5};
    std::cout << RED << "int array: array1" << std::endl;
    // • The first parameter is the address of an array.
    // • The second one is the length of the array.
    // • The third one is a function that will be call on every element of the array passed as a reference.
    ::iter<int>(array1, 5, &print_array);
    // iter(array1, 5, print_array<int>);
    char array2[] ={'a', 'b', 'c', 'd'};
    std::cout << BLUE"char array: " << "array2" << std::endl;
    ::iter<char>(array2, 4, &print_array);
    Student array3[2];
    array3[0].setStudentNumber(12);
    array3[1].setStudentNumber(6);
    std::cout << GREEN"class array: " << "array3" << std::endl;
    ::iter<Student>(array3, 2, &print_array);
    return 0;
}

// class Awesome
// {
//   public:
//     Awesome( void ) : _n( 42 ) { return; }
//     int get( void ) const { return this->_n; }
//   private:
//     int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
//   o << rhs.get();
//   return o;
// }

// template< typename T >
// void print(const T& x )
// {
//   std::cout << x << std::endl;
//   return;
// }

// int main() {
//   int tab[] = { 0, 1, 2, 3, 4, 9, 8 };
//   Awesome tab2[5];

//   iter(tab, 7, print< const int>);
//   iter(tab2, 5, print<Awesome>);

//   return 0;
// }