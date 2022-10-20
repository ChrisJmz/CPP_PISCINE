/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:20:28 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 20:26:05 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    std::string str;
    std::cout << "Select level (debug, info, warning, error): ";
    if (!(std::getline(std::cin, str)))
        return (1);
    harl.complain(str);
}