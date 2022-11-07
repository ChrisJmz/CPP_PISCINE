/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:34:20 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/07 14:53:48 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_rawBits = 0;
}

Fixed::Fixed(const Fixed &nb)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_rawBits = nb.getRawBits();
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits called" << std::endl;
    return (_rawBits);
}

void Fixed::setRawBits(int const raw)
{
    this->_rawBits = raw;
}

Fixed & Fixed::operator=(Fixed const & value)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = value.getRawBits();
    return *this;
}
