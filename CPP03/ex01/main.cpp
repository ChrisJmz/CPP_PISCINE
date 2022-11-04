/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:25:16 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:44:46 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void){

    {
        std::cout << "====Default method===============" << std::endl;
        ScavTrap yasuo;
        std::cout << "=================================" << std::endl;
        std::cout << "health: " << yasuo.getHealth() << std::endl;
        std::cout << "energy: " << yasuo.getEnergy() << std::endl;
        std::cout << "attack: " << yasuo.getAttack() << std::endl;
        std::cout << "=================================" << std::endl;
        yasuo.attack("Rammus");
        yasuo.takeDamage(10);
        yasuo.beRepaired(5);
        std::cout << "=================================" << std::endl;
        std::cout << "health: " << yasuo.getHealth() << std::endl;
        std::cout << "energy: " << yasuo.getEnergy() << std::endl;
        std::cout << "attack: " << yasuo.getAttack() << std::endl;
        std::cout << "=================================" << std::endl;
        yasuo.guardGate();
        std::cout << "=================================" << std::endl;
    }
}