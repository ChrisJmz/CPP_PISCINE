/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:44:43 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:46:04 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    this->_name = getName();
    this->_healthPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
    _healthPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_healthPoint == 0)
        std::cout << "ScapTrap " << _name << " islow on health and cannot attack" << std::endl;
    else if (_energyPoint == 0)
        std::cout << "ScavTrap " << _name << " is low on energy and cannot attack" << std::endl;
    else
    {
        _energyPoint--;
        std::cout << "ScavTrap " << _name << "is trying to kill " << target << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "Scavtrap " << _name << " Guard Gate mode" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & value)
{
    _name = value.getName();
    _healthPoint = value.getHealth();
    _energyPoint = value.getEnergy();
    _attackDamage = value.getAttack();
    return (*this);
}
