/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:25:04 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 20:37:51 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main()
{
    try
    {
        std::vector<int> list(1000);
        for (int i = 0; i < 1000; i++)
            list.push_back(i);
        std::cout << "Search 42: " << *easyfind(list, 42) << std::endl;
        std::cout << "Search 12: " << *easyfind(list, 12) << std::endl;
        std::cout << "Search 1001: " << *easyfind(list, 1001) << std::endl;
        
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
}