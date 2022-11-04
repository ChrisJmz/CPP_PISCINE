/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:53:01 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:32:58 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int         _healthPoint;
        unsigned int         _energyPoint;
        unsigned int         _attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &copy);
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