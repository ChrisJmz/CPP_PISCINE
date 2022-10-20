/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:46:05 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 21:33:28 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void) const
{
    if (_weapon == NULL)
        std::cout << _name << "boxing with their hands" << std::endl;
    else
        std::cout << _name << "attack with " << _weapon->getType() << std::endl;
}