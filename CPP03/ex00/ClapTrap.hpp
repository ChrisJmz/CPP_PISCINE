/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:53:01 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 17:04:35 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _healthPoint;
        int         _energyPoint;
        int         _attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &a);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName();
        int getEnergy();
        int getAttack();
        int getHealth();
        void setDamage(int amount);
        void setHealth(int amount);
        void setEnergy(int amount);
};

#endif