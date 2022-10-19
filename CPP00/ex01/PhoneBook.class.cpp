/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:34:01 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 10:56:53 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
    return ;
}

PhoneBook::~PhoneBook(void) {
    return ;
}

void    PhoneBook::display(void)
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

void    PhoneBook::msg(void)
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