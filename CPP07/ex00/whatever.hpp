/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:07:34 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/24 21:09:49 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &t1, T &t2)
{
    T tmp = t1;
    t1 = t2;
    t2 = tmp;
}

template <typename T>
T min(T &t1, T &t2)
{
    return t1 <= t2 ? t1 : t2;
}

template <typename T>
T max(T &t1, T &t2)
{
    return t1 >= t2 ? t1 : t2;
}

#endif