/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:33:29 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/13 16:37:05 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "string adress     : " << &str << std::endl;
    std::cout << "pointer adress    : " << ptr << std::endl;
    std::cout << "reference adress  : " << &ref << std::endl;
    
    std::cout << "string    : " << str << std::endl;
    std::cout << "pointer   : " << *ptr << std::endl;
    std::cout << "string    : " << ref << std::endl;
}