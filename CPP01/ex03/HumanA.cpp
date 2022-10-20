/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:59:13 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 21:31:02 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon)
{
    _name = name;
}

HumanA::~HumanA()
{

}

void HumanA::attack(void) const
{
    std::cout << _name << " attacking with " << _weapon.getType() << std::endl;
}