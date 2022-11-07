/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:34:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/07 14:44:59 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int                 _rawBits;
        static const int    _bits = 8;
    public:
        Fixed();
        Fixed(int const i);
        Fixed(float const f);
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed & operator=(const Fixed &assign);
        bool operator==(const Fixed &compare) const;
        bool operator>(const Fixed &compare) const;
        bool operator>=(const Fixed &compare) const;
        bool operator<(const Fixed &compare) const;
        bool operator<=(const Fixed &compare) const;
        bool operator!=(const Fixed &compare) const;
        Fixed operator+(Fixed const &modif);
        Fixed operator-(Fixed const &modif);
        Fixed operator*(Fixed const &modif);
        Fixed operator/(Fixed const &modif);
        Fixed & operator++(void);
        Fixed operator++(int);
        Fixed & operator--(void);
        Fixed operator--(int);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt()const;
        float toFloat()const;
        static Fixed & min(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed & max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);

#endif
