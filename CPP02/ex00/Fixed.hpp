/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:52:30 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/07 14:53:22 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int _rawBits;
        static const int _bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &nb);
        ~Fixed();
        Fixed & operator = (Fixed const & value);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif