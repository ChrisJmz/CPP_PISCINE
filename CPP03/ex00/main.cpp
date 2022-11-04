/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:25:16 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:38:08 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// int main(void)
// {
//     ClapTrap test("Thary");
//     std::cout << "[ClapTrap " << test.getName()<< " created]" << std::endl;
//     std::cout << "health: " << test.getHealth() << std::endl;
//     std::cout << "energy: " << test.getEnergy() << std::endl;
//     std::cout << "damage: " << test.getAttack() << std::endl;
//     test.attack("Bob");
//     std::cout << "energy: " << test.getEnergy() << std::endl;
//     test.takeDamage(9);
//     std::cout << "health: " << test.getHealth() << std::endl;
//     test.beRepaired(9);
//     std::cout << "health: " << test.getHealth() << std::endl;
//     std::cout << "energy: " << test.getEnergy() << std::endl;
// }

// #include "ClapTrap.hpp"

int	main()
{
	{
		std::cout << "===== Energy limit test =====" << std::endl;
		ClapTrap yasuo;
		yasuo.attack("Test");
		yasuo.beRepaired(0);
		yasuo.attack("Test");
		yasuo.beRepaired(0);
		yasuo.attack("Test");
		yasuo.beRepaired(0);
		yasuo.attack("Test");
		yasuo.beRepaired(0);
		yasuo.attack("Test");
		yasuo.beRepaired(0);
		yasuo.attack("Test");
		yasuo.beRepaired(0);
	}
	{
		std::cout << "===== Hit points limit test =====" << std::endl;
		ClapTrap yasuo;
		yasuo.takeDamage(10);
		yasuo.attack("Test");
		yasuo.beRepaired(0);
	}
	{
		std::cout << "===== Take damage test =====" << std::endl;
		ClapTrap yasuo;
		yasuo.takeDamage(1);
		yasuo.takeDamage(2);
		yasuo.takeDamage(5);
		yasuo.takeDamage(5);
		yasuo.takeDamage(500);
	}
	{
		std::cout << "===== Repair test =====" << std::endl;
		ClapTrap yasuo;
		yasuo.beRepaired(1);
		yasuo.beRepaired(2);
		yasuo.beRepaired(5);
	}
}