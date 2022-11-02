/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:01:26 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 17:39:13 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Default constructor called" << std::endl;
    this->_name = name;
    this->_healthPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 10;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_name = a.getName();
    this->_healthPoint = 10;
    this->_energyPoint = 10;
    this->_attackDamage = 10;
}

std::string ClapTrap::getName()
{
    return (this->_name);
}

int ClapTrap::getEnergy()
{
    return (this->_energyPoint);
}

int ClapTrap::getAttack()
{
    return (this->_attackDamage);
}

int ClapTrap::getHealth()
{
    return (this->_healthPoint);
}

void ClapTrap::setDamage(int amount)
{
    this->_attackDamage = amount;
}

void ClapTrap::setHealth(int amount)
{
    this->_healthPoint = amount;
}

void ClapTrap::setEnergy(int amount)
{
    this->_energyPoint = amount;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoint <= 0)
        return ;
    std::cout << "ClapTrap " << getName() << " attacked " << target << std::endl;
    setEnergy(_energyPoint - 1);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    _healthPoint -= amount;
    std::cout << "ClapTrap " << getName() << " took " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoint <= 0)
        return ;
    std::cout << "ClapTrap " << getName() << " healed " << amount << " hp"<< std::endl;
    _healthPoint += amount;
    setEnergy(_energyPoint - 1);
}