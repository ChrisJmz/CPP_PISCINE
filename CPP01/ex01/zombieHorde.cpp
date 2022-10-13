/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:52:27 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/13 15:54:01 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    int i = 0;
    
    if (n <= 0)
        return (NULL);
    Zombie *zombieHorde = new Zombie[n];
    while (i < n)
    {
        zombieHorde[i].setName(name);
        i++;
    }
    return (zombieHorde);
}