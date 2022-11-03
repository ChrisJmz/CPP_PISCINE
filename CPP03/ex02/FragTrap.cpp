/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:08:05 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/03 12:27:33 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_name = getName();
    this->_healthPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    _healthPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &a) : ClapTrap(a)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (_healthPoint == 0)
        std::cout << "FragTrap " << _name << " has 0 health point" << std::endl;
    else if (_energyPoint == 0)
        std::cout << "FragTrap " << _name << " has 0 energy point" << std::endl;
    else
    {
        setEnergy(_energyPoint - 1);
        std::cout << "FragTrap " << getName() << " is foudroying " << target << std::endl;
    } 
}

void highFivesGuys(void)
{
    std::cout << "FragTrap is giving high five" << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const & value)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    this->_name = value.getName();
    this->_healthPoint = value.getHealth();
    this->_energyPoint = value.getEnergy();
    this->_attackDamage = value.getAttack();
    return (*this);
}