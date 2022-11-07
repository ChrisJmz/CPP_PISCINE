/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:46:19 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/07 14:45:14 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _rawBits = 0;
}

Fixed::Fixed(int const i)
{
    _rawBits = i << _bits;
}

Fixed::Fixed(float const f)
{
    _rawBits = round(f * (1 << _bits));
}

Fixed::Fixed(const Fixed &copy)
{
    _rawBits = copy.getRawBits();
}

Fixed::~Fixed()
{
    
}

Fixed & Fixed::operator=(const Fixed &assign)
{
    _rawBits = assign.getRawBits();
    return *this;
}

bool Fixed::operator==(const Fixed &compare) const
{
    return _rawBits == compare.getRawBits();
}

bool Fixed::operator>(const Fixed &compare) const
{
    return _rawBits > compare.getRawBits();
}

bool Fixed::operator>=(const Fixed &compare) const
{
    return _rawBits >= compare.getRawBits();
}

bool Fixed::operator<(const Fixed &compare) const
{
    return _rawBits < compare.getRawBits();
}

bool Fixed::operator<=(const Fixed &compare) const
{
    return _rawBits <= compare.getRawBits();
}

bool Fixed::operator!=(const Fixed &compare) const
{
    return _rawBits != compare.getRawBits();
}

Fixed Fixed::operator+(Fixed const &modif)
{
    Fixed result;
    result.setRawBits(_rawBits + modif.getRawBits());
    return result;
}

Fixed Fixed::operator-(Fixed const &modif)
{
    Fixed result;
    result.setRawBits(_rawBits - modif.getRawBits());
    return result;
}

Fixed Fixed::operator*(Fixed const &modif)
{
    Fixed result;
    result.setRawBits((_rawBits * modif.getRawBits()) >> _bits);
    return result;
}

Fixed Fixed::operator/(Fixed const &modif)
{
    Fixed result;
    result.setRawBits((_rawBits << _bits) / modif.getRawBits());
    return result;
}

Fixed &Fixed::operator++(void)
{
    _rawBits++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    _rawBits++;
    return tmp;
}

Fixed &Fixed::operator--(void)
{
    _rawBits--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    _rawBits--;
    return tmp;
}

int Fixed ::getRawBits(void) const
{
    return _rawBits;
}

void Fixed::setRawBits(int const raw)
{
    _rawBits = raw;
}

int Fixed::toInt() const
{
    return _rawBits >> _bits;
}

float Fixed::toFloat() const
{
    return _rawBits / (float)(1 << _bits);
}

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b ? a : b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed)
{
    stream << fixed.toFloat();
    return stream;
}