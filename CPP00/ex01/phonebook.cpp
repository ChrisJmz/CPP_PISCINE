/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:36:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/18 14:43:14 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"


void    display()
{
    std::cout << std::endl;
    std::cout << "|";
    std::cout << std::setw(11)<< " Index|";
    std::cout << std::setw(11)<< " First|";
    std::cout << std::setw(11)<< " Last|";
    std::cout << std::setw(11)<< " Nick|" << std::endl;
}

void    PhoneBook::Search()
{
    for (int i = 0; i < 8; i++)
        this->contact[i].list();
    
}  

void    msg(void)
{
    std::cout << "PHONEBOOK BANGER : ADD, SEARCH OR EXIT: ";
}

void    PhoneBook::Add()
{
    for (int i = 0; i % 8 < 8; i++)
    {
        if (this->contact[i].isEmpty())
        {
               this->contact[i].addContact(i);
               return ;
        }
        else if (i >= 8)
        {
            this->contact[i % 8].clearContact();
            this->contact[i % 8].addContact(i % 8);
            return ;
        }
    }
}

void    PhoneBook::List(int i)
{
    if (this->contact[i].isEmpty())
        return ;
    this->contact[i].affContact();
    return ;
}

int main(void) {
    
    PhoneBook   pbook;
    std::string cmd;
    msg();
    while (1)
    {
        if (!std::getline(std::cin, cmd))
            return (std::cout << "EOF EXIT" << std::endl, 1);
        for (std::string::size_type k = 0; k < cmd.length(); ++k)
            cmd[k] = std::toupper(cmd[k]);
        if (cmd == "EXIT")
            return (0);
        if (cmd == "ADD")
            pbook.Add();
        if (cmd == "SEARCH")
        {
            display();
            pbook.Search();
            while (1)
            {
                std::cout << "Contact index: ";
                if (!std::getline(std::cin, cmd))
                    exit (1);
                if (cmd == "EXIT")
                {
                    msg();
                    break ;
                }
                if (std::isdigit(cmd[0]) && atoi(cmd.c_str()) < 8 && cmd != "")
                    pbook.List(atoi(cmd.c_str()));
            }
        }
        else
            msg();
    }
}