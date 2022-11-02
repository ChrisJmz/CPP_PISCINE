/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:01:26 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 20:23:22 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_healthPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
}

ClapTrap::ClapTrap(std::string const &name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_name = name;
    this->_healthPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &a)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->_name = a.getName();
    this->_healthPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & value)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
        this->_name = value.getName();
        this->_healthPoint = value.getHealth();
        this->_energyPoint = value.getEnergy();
        this->_attackDamage = value.getAttack();
    return (*this);
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}

int ClapTrap::getEnergy() const
{
    return (this->_energyPoint);
}

int ClapTrap::getAttack() const
{
    return (this->_attackDamage);
}

int ClapTrap::getHealth() const
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