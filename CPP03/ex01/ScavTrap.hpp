/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:44:45 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 20:13:17 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
    
    public:
        ScavTrap();
        ScavTrap(std::string const &name);
        ScavTrap(ScavTrap &a);
        ~ScavTrap();
        void attack(const std::string &target);
        void guardGate();
        ScavTrap & operator=(ScavTrap const & value);
};

#endif