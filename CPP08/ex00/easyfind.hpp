/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:20:24 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 20:31:12 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <stdexcept>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int const search)
{
    typename T::iterator it = find(container.begin(), container.end(), search);
    if (it != container.end())
        return it;
    throw std::invalid_argument("Value not in container");
}

#endif