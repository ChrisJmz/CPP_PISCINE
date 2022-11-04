/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:01:26 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:56:19 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
    this->_healthPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap" << _name << " constructor called" << std::endl;
    this->_name = name;
    this->_healthPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = copy.getName();
    this->_healthPoint = copy.getHealth();
    this->_energyPoint = copy.getEnergy();
    this->_attackDamage = copy.getAttack();
}

std::string ClapTrap::getName() const
{
    return (_name);
}

int ClapTrap::getEnergy() const
{
    return (_energyPoint);
}

int ClapTrap::getAttack() const
{
    return (_attackDamage);
}

int ClapTrap::getHealth() const
{
    return (_healthPoint);
}

void ClapTrap::attack(const std::string& target)
{
    if (_healthPoint == 0)
        std::cout << "ClapTrap " << _name << " is low on health and cannot attack" << std::endl;
    else if (_energyPoint == 0)
        std::cout << "ClapTrap " << _name << " is low on energy and cannot attack"  << std::endl;
    else
    {
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " attacked " << target << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > _healthPoint)
        _healthPoint = 0;
    else
        _healthPoint -= amount;
    std::cout << "ClapTrap " << _name << "took " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint == 0)
        std::cout << "ClapTrap " << _name << " is low on energy and cannot be repaired" << std::endl;
    else
    {
        _energyPoint--;
        _healthPoint += amount;
        std::cout << "ClapTrap " << _name << " repaired " << amount << " hp"<< std::endl;
    }
}