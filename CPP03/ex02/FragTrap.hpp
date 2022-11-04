/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:27:31 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 15:04:54 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap &copy);
        ~FragTrap();
        void highFivesGuys(void);
        FragTrap & operator=(FragTrap const & value);
};

#endif