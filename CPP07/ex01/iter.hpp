/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:31:10 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 16:39:49 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <cstddef>

template<typename T>
void iter(T *array, std::size_t length, void (*func)(T &))
{
    for (std::size_t i = 0; i < length; i++)
        (*func)(array[i]);
}

#endif