/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:04:58 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/13 16:15:47 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << _name << "\033[0;31m died\033[0m" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": ";
    std::cout << "\033[0;35mBraiiiiiiinnnzzzZ...\033[0m" << std::endl;
}
