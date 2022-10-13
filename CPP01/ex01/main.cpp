/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:57:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/13 16:15:29 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string nbr;
    std::string name;
    
    std::cout << "Nombre de zombie: ";
    std::getline(std::cin, nbr);
    std::cout << "Nom de zombie: ";
    std::getline(std::cin, name);
    Zombie *Horde = zombieHorde(atoi(nbr.c_str()), name);
    int i = 0;
    while (i < atoi(nbr.c_str()))
    {
        Horde[i].announce();
        i++;
    }
    delete []Horde;
}