/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:16:03 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/03 11:00:53 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _rawBits = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    _rawBits = roundf(value * (1 << _bits));
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    _rawBits = value << _bits;
}

Fixed::Fixed(const Fixed &nb)
{
    std::cout << "Copy constructor called" << std::endl;
    _rawBits = nb.getRawBits();
}

int Fixed::toInt(void) const
{
    return _rawBits >> _bits;
}

float Fixed::toFloat(void) const 
{
    return (_rawBits /  (float)( 1 << _bits));
}

int Fixed::getRawBits(void) const
{
    return _rawBits;
}

void    Fixed::setRawBits(int const raw)
{
    _rawBits = raw;
}

Fixed & Fixed::operator=(Fixed const & value)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _rawBits = value.getRawBits();
    return *this;    
}

std::ostream & operator<<(std::ostream & out, Fixed const & value)
{
    out << value.toFloat();
    return (out);
}

