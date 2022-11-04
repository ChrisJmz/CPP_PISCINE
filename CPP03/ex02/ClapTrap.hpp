/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:53:01 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 14:50:00 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        unsigned int         _healthPoint;
        unsigned int         _energyPoint;
        unsigned int         _attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap &copy);
        ~ClapTrap();
        ClapTrap & operator =( ClapTrap const & value );
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string getName() const;
        int getEnergy() const;
        int getAttack() const;
        int getHealth() const;
        void setDamage(int amount);
        void setHealth(int amount);
        void setEnergy(int amount);
};

#endif