/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:57:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/24 15:33:34 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "Creation de 5 zombies Jeff" << std::endl;
    Zombie *Horde = zombieHorde(5, "Jeff");
    int i = 0;
    while (i < 5)
    {
        Horde[i].announce();
        i++;
    }
    delete []Horde;
}