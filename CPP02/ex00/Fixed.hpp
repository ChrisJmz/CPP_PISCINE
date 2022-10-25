/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:52:30 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/25 15:04:37 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int _bits;
        int _rawBits;
    public:
        Fixed();
        Fixed(const Fixed &nb);
        ~Fixed();
        Fixed & operator = (Fixed const & value);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif