/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:36:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/11 18:25:54 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"
#include <iomanip>

void    msg(void)
{
    std::cout << "PHONEBOOK BANGER : ADD, SEARCH OR EXIT: " << std::endl;
}

void    List(Contact *contact, int index)
{
    std::cout << std::endl << "First name: " << contact[index].getFirstName()<< std::endl;
    std::cout << "Last name: " << contact[index].getLastName()<< std::endl;
    std::cout << "Nickname: " << contact[index].getNickname()<< std::endl;
    std::cout << "Phone number: " << contact[index].getPhoneNumber()<< std::endl;
    std::cout << "Darkest secret: " << contact[index].getDarkestSecret()<< std::endl;
}

inline void search (Contact *contact, int i){
    
    std::string value;
    std::cout << std::endl;
    std::cout << "|";
    std::cout << std::setw(11)<< "Index |";
    std::cout << std::setw(11)<< "First |";
    std::cout << std::setw(11)<< "Last |";
    std::cout << std::setw(11)<< "Nick |" << std::endl;

    if (i == 0){
        std::cout << std::endl << "No contact found" << std::endl;
        return ;
    }
    for (int j = 0; j < i; j++)
    {
        std::cout << "|";
        std::cout << std::setw(9) << j << " |";
        value = contact[j].getFirstName();
        if (value.length() > 10){
            std::cout << value.substr(0,9) << ".";
        }
        else
            std::cout << std::setw((10 - value.length()) + value.length()) << value;
        std::cout << "|";
        value = contact[j].getLastName();
        if (value.length() > 10){
            std::cout << value.substr(0,9) << ".";
        }
        else
            std::cout << std::setw((10 - value.length()) + value.length()) << value;
        std::cout << "|";
        value = contact[j].getNickname();
        if (value.length() > 10){
            std::cout << value.substr(0,9) << ".";
        }
        else
            std::cout << std::setw((10 - value.length()) + value.length()) << value;
        std::cout << "|" << std::endl;
    }
    std::cout << std::endl << "Contact index: ";
    std::string input;
    int index;

    while (1)
    {
        if (!std::getline(std::cin, input))
            exit (1);
        if (input == "EXIT")
            break ;
        if (std::isdigit(input[0]) && atoi(input.c_str()) < 9 && input != "" && atoi(input.c_str()) <= index)
        {
            index = std::stoi(input);
            List(contact, index);
        }
        else
            std::cout << "Contact index:";
    }
}

int main(void) {
    std::string cmd;
    std::string value;
    std::locale loc;
    PhoneBook phoneBook;

    int i = 0;
    int j = 0;

    msg();
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
                if (!std::getline(std::cin, value))
                    return (0);
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setFirstName(value);
                value = "";
                std::cout << "Please enter your last name: ";
                if (!std::getline(std::cin, value))
                    return (0);
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setLastName(value);
                value = "";
                std::cout << "Please enter your nickname: ";
                if (!std::getline(std::cin, value))
                    return (0);
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setNickname(value);
                value = "";
                std::cout << "Please enter your phone number: ";
                if (!std::getline(std::cin, value))
                    return (0);
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setPhoneNumber(value);
                value = "";
                std::cout << "Please enter your darkest secret: ";
                if (!std::getline(std::cin, value))
                    return (0);
                std::cin.clear();
                fflush(stdin);
                phoneBook.contact[j].setDarkestSecret(value);
                value = "";
                if (i != 8)
                    i++;
                j++;
                std::cout << "Contact successfully added !" << std::endl;
                msg();
            }
        else if (cmd == "SEARCH"){
            search(phoneBook.contact, i);
            msg();
        }
        else if (cmd == "EXIT")
            break ;
        else
            std::cout << "Invalid command, use ADD, SEARCH OR EXIT" << std::endl;
        if (j == 8)
            j = 0;
    }
}