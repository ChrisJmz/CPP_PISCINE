/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:36:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/10 18:08:18 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iostream>
#include <string>

std::string changeToUpper(std::string cmd)
{
    for (int i = 0; i < (int)cmd.length(); i++)
        cmd[i] = toupper(cmd[i]);
    return cmd;
}

int main(void) {
    std::string cmd;
    std::string value;
    std::locale loc;
    PhoneBook phoneBook;
    int i = 0;
    int j = 0;

    std::cout << "PHONEBOOK BANGER : ADD, SEARCH OR EXIT: " << std::endl;
    while (1)
    {
        if (!std::getline(std::cin, cmd)) {
            std::cout << "OEF EXIT" << std::endl;
            return (0);
        }
        for (std::string::size_type k = 0; k < cmd.length(); ++k)
            cmd[k] = std::toupper(cmd[k], loc);
        if (cmd == "ADD"){
                std::cout << "Please enter your first name: ";
                if (!std::getline(std::cin, cmd)){
                    std::cout << "OEF EXIT" << std::endl;
                    return (0);
                }
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setFirstName(value);
                value = "";
                std::cout << "Please enter your last name: ";
                if (!std::getline(std::cin, cmd)){
                    std::cout << "OEF EXIT" << std::endl;
                    return (0);
                }
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setLastName(value);
                value = "";
                std::cout << "Please enter your nickname: ";
                if (!std::getline(std::cin, cmd)){
                    std::cout << "OEF EXIT" << std::endl;
                    return (0);
                }
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setNickname(value);
                value = "";
                std::cout << "Please enter your phone number: ";
                if (!std::getline(std::cin, cmd)){
                    std::cout << "OEF EXIT" << std::endl;
                    return (0);
                }
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setPhoneNumber(value);
                value = "";
                std::cout << "Please enter your darkest secret: ";
                if (!std::getline(std::cin, cmd)){
                    std::cout << "OEF EXIT" << std::endl;
                    return (0);
                }
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setDarkestSecret(value);
                value = "";
                if (i != 8)
                    i++;
                j++;
            }
        else if (cmd == "SEARCH")
            
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "Invalid command, use ADD, SEARCH OR EXIT !!!" << std::endl;
        if (j == 8)
            j = 0;
    }
}