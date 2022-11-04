/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:22:12 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:58:04 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	{
		std::cout << "===== herited methods test =====" << std::endl;
		FragTrap yasuo("yasuo");
		yasuo.attack("Test");
		yasuo.takeDamage(5);
		yasuo.beRepaired(5);
	}
	{
		std::cout << "===== High five test =====" << std::endl;
		FragTrap yasuo("yasuo");
		yasuo.highFivesGuys();
	}
	{
		std::cout << "===== Copy constructor test =====" << std::endl;
		FragTrap yasuo("yasuo");
		FragTrap yasuo2(yasuo);
		yasuo2.takeDamage(10);
		yasuo.takeDamage(5);
	}
}