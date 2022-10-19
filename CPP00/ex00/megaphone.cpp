/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:33:25 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 16:01:13 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

int main(int ac, char **av)
{
    int i;
    int j;
    std::locale loc;
    
    i = 0;
    if (ac == 1)
        return (std::cout << "*LOUD AND UNBREAKABLE FEEDBACK NOISE*" << std::endl, 0);
    while (av[++i])
    {
        j = 0;
        while (av[i][j])
            std::cout << std::toupper(av[i][j++], loc);
    }
    std::cout << std::endl;
    return (0);
}