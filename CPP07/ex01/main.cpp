/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:35:41 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 16:40:42 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void print(int &number)
{
    std::cout << number << std::endl;
}

void plusplus(int &i)
{
    i += 42;
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    ::iter(array, 5, &print);;
    std::cout << "~~~~" << std::endl;
    ::iter(array, 5, plusplus);
    ::iter(array, 5, &print);
}