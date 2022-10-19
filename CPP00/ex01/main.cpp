/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:36:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 15:50:34 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

int main(void) {
    
    PhoneBook   pbook;
    Contact     cnt;
    std::string cmd;
    pbook.msg();
    while (1)
    {
        if (!std::getline(std::cin, cmd))
            return (std::cout << std::endl << "[EOF EXIT]" << std::endl, 1);
        for (std::string::size_type k = 0; k < cmd.length(); ++k)
            cmd[k] = std::toupper(cmd[k]);
        if (cmd == "EXIT")
            return (0);
        if (cmd == "ADD")
            pbook.Add();
        if (cmd == "SEARCH")
        {
            pbook.display();
            pbook.Search();
            while (1)
            {
                std::cout << "Contact index: ";
                if (!std::getline(std::cin, cmd))
                    return (std::cout << std::endl << "[EOF EXIT]" << std::endl, 1);
                if (cmd == "EXIT")
                {
                    pbook.msg();
                    break ;
                }
                if (std::isdigit(cmd[0]) && atoi(cmd.c_str()) < 8 && cmd != "")
                    pbook.List(atoi(cmd.c_str()));
            }
        }
        else
            pbook.msg();
    }
}