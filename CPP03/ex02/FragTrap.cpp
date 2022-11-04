/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:08:05 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:56:29 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_healthPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
    _healthPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name <<  " is giving high five" << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const & value)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    _name = value.getName();
    _healthPoint = value.getHealth();
    _energyPoint = value.getEnergy();
    _attackDamage = value.getAttack();
    return (*this);
}