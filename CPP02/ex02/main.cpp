/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:03:50 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/07 15:04:26 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl << std::endl << std::endl;
    Fixed const c(Fixed(12) + Fixed(30));
    Fixed const d(Fixed(84) * Fixed(0.5f));
    Fixed const e(Fixed(123.5f) - Fixed(32.25f));
    Fixed const f(Fixed(9000) / Fixed(9));

    std::cout << "[ + , - , * , / ]" << std::endl;
    std::cout << "Result 12 + 30 is: " << c << std::endl;
    std::cout << "Result 84 * 0.5 is: " << d << std::endl;
    std::cout << "Result 123.5 - 32.25 is: " << e << std::endl;
    std::cout << "Result 9000 / 9 is: " << f << std::endl << std::endl;

    std::cout << "[ Min and max ]" << std::endl;
    Fixed g(123);
    Fixed h(321);
    std::cout << "[ Per Const Fixed ]" << std::endl;
    std::cout << "Lowest between 1000 and 42 is: " << Fixed::min(c, f) << std::endl;
    std::cout << "Highest between 1000 and 42 is: " << Fixed::max(e, f) << std::endl;
    std::cout << "[ Per Fixed ]" << std::endl;
    std::cout << "Lowest between 123 and 321 is: " << Fixed::min(g, h) << std::endl;
    std::cout << "Highest between 123 and 321 is: " << Fixed::max(g, h) << std::endl << std::endl;

    std::cout << "[ Comparison operators (1 == true | 0 == false) ]" << std::endl;
    std::cout << "123 < 321: " << (g < h) << std::endl;
    std::cout << "123 <= 321: " << (g <= h) << std::endl;
    std::cout << "123 > 321: " << (g > h) << std::endl;
    std::cout << "123 >= 321: " << (g >= h) << std::endl;
    std::cout << "123 == 321: " << (g == h) << std::endl;
    std::cout << "123 != 321: " << (g != h) << std::endl;
    std::cout << "123 != 123: " << (g != g) << std::endl;
    std::cout << "123 == 123: " << (g == g) << std::endl;
    return 0;
}
