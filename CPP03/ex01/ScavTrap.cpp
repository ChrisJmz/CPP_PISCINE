/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:44:43 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 20:28:00 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name;
}

ScavTrap::ScavTrap(ScavTrap &a) : ClapTrap()
{
    this->_name = a.getName();
    this->_healthPoint = a.getHealth();
    this->_energyPoint = a.getEnergy();
    this->_attackDamage = a.getAttack();
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << getName() << " attacked " << target << std::endl;
    setEnergy(_energyPoint - 1);
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << getName() << " Guard Gate mode" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & value)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    this->_name = value.getName();
    this->_healthPoint = value.getHealth();
    this->_energyPoint = value.getEnergy();
    this->_attackDamage = value.getAttack();
    return (*this);
}
