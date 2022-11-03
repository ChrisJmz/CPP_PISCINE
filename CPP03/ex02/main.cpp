/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:22:12 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/03 12:28:06 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main (void){

    {
        std::cout << "====Default method===============" << std::endl;
        FragTrap yasuo("Yasuo");
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
    }
}