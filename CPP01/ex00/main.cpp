/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:17:33 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/13 14:38:11 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::cout << "\033[0;32m4 Zombie with function\033[0m" << std::endl;
    std::cout << "----------------" << std::endl;
    Zombie("Lilou");
    Zombie("Chris");
    Zombie("Yassine");
    Zombie("Yasuo");
    std::cout << "----------------" << std::endl;
    std::cout << "\033[0;32m2 Zombie with newZombie\033[0m" << std::endl;
    std::cout << "----------------" << std::endl;
    Zombie *zombie1 = newZombie("Joseph");
    Zombie *zombie2 = newZombie("Joseph");
    std::cout << "----------------" << std::endl;
    delete(zombie1);
    delete(zombie2);
    std::cout << "----------------" << std::endl;
    std::cout << "\033[0;32m2 Zombie with randomChump\033[0m" << std::endl;
    std::cout << "----------------" << std::endl;
    randomChump("Random Jay");
    randomChump("Random Cj");
    std::cout << "----------------" << std::endl;
}