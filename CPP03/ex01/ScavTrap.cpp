/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:44:43 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/03 12:08:41 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap constructor called" << std::endl;
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

ScavTrap::ScavTrap(ScavTrap &a) : ClapTrap(a)
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
        std::cout << "ScapTrap " << _name << " has 0 health point" << std::endl;
    else if (_energyPoint == 0)
        std::cout << "ScavTrap" << _name << " has 0 energy point" << std::endl;
    else
    {
        setEnergy(_energyPoint - 1);
        std::cout << "ScavTrap " << getName() << " is bullying " << target << std::endl;
    }
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
