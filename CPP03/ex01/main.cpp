/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:25:16 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/02 20:46:41 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void){
    ScavTrap test("Rammus");
    ScavTrap Yasuo("yasuo");
    
    test.attack("you");
    test.guardGate();
    test.beRepaired(100);
    
    Yasuo.attack("you");
    Yasuo.guardGate();
    Yasuo.beRepaired(100);
    return 0;
}