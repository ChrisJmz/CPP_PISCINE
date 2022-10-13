/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:10:46 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/13 18:29:48 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    std::string name;
    std::string weapon;
    std::cout << "Human A name: ";
    if (!std::getline(std::cin, name))
        exit (1);
    std::cout << "Weapon: ";
    if (!std::getline(std::cin, weapon))
        exit (1);
    Weapon weapon1 = Weapon(weapon);
    HumanA number1(name, weapon1);
    number1.attack();
    std::cout << "Human B name: ";
    if (!std::getline(std::cin, name))
        exit (1);
    std::cout << "Weapon: ";
    if (!std::getline(std::cin, weapon));
        exit (1);
    Weapon weapon2 = Weapon(weapon);
    HumanA number2(name, weapon2);
    number2.attack();
    std::cout << "Weapon: ";
    if (!std::getline(std::cin, weapon))
        exit (1);
    weapon2.setType(weapon);
    number2.attack();
    return (0);
}