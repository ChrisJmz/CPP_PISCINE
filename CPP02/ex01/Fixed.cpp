/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:16:03 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/25 16:10:28 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_rawBits = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
    std::cout << "Constructor float called" << std::endl;
    this->_rawBits = (int)(roundf(value * (1 << this->_bits)));
}

Fixed::Fixed(const int value)
{
    std::cout << "Constructor int called" << std::endl;
    this->_rawBits = value << _bits;
}

Fixed::Fixed(const Fixed &nb)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_rawBits = nb.getRawBits();
}

int Fixed::toInt(void) const
{
    return ((int)this->_rawBits >> this->_bits);
}

float Fixed::toFloat(void) const 
{
    return ((float)this->_rawBits /  ( 1 << this->_bits));
}

int Fixed::getRawBits(void) const
{
    return (this->_rawBits);
}

void    Fixed::setRawBits(int const raw)
{
    this->_rawBits = raw;
}

Fixed & Fixed::operator=(Fixed const & value)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = value.getRawBits();
    return *this;    
}

std::ostream & operator<<(std::ostream & out, Fixed const & value)
{
    out << value.toFloat();
    return (out);
}

