/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:34:01 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 16:14:33 by cjimenez         ###   ########.fr       */
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
    static int i = 0;

    this->contact[i].addContact(i);
    i++;
    if (i == 8)
        i = 0;
}

void    PhoneBook::List(int i)
{
    if (this->contact[i].isEmpty())
        return ;
    this->contact[i].affContact();
    return ;
}