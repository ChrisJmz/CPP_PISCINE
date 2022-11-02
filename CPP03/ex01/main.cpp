/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:25:16 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 17:39:34 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap test("Thary");
    std::cout << "[ClapTrap " << test.getName()<< " created]" << std::endl;
    std::cout << "health: " << test.getHealth() << std::endl;
    std::cout << "energy: " << test.getEnergy() << std::endl;
    std::cout << "damage: " << test.getAttack() << std::endl;
    test.attack("Bob");
    std::cout << "energy: " << test.getEnergy() << std::endl;
    test.takeDamage(9);
    std::cout << "health: " << test.getHealth() << std::endl;
    test.beRepaired(9);
    std::cout << "health: " << test.getHealth() << std::endl;
    std::cout << "energy: " << test.getEnergy() << std::endl;
}