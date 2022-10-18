/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:10:22 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/18 14:43:01 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
# include <iomanip>

Contact::Contact (void) {
    return ;
}

Contact::~Contact (void) {
    return ;
}

void    Contact::list(void) const
{
    if (this->_FirstName.compare("") == 0)
        return ;
    std::cout << "|";
    std::cout << std::setw(10) << _Index << "|";
    if (_FirstName.length() > 10){
        std::cout << this->_FirstName.substr(0,9) << ".";
    }
    else
        std::cout << std::setw((10 - this->_FirstName.length()) + this->_FirstName.length()) << this->_FirstName;
    std::cout << "|";
    if (this->_LastName.length() > 10){
        std::cout << this->_LastName.substr(0,9) << ".";
    }
    else
        std::cout << std::setw((10 - this->_LastName.length()) + this->_LastName.length()) << this->_LastName;
    std::cout << "|";
    if (this->_Nickname.length() > 10){
        std::cout << this->_Nickname.substr(0,9) << ".";
    }
    else
        std::cout << std::setw((10 - this->_Nickname.length()) + this->_Nickname.length()) << this->_Nickname;
    std::cout << "|" << std::endl;
}


void    Contact::addContact(int i)
{
    this->_Index = i;
    while (this->_FirstName == "")
    {
        std::cout << "Please enter your first name: ";
        if (!std::getline(std::cin, this->_FirstName))
            exit (0);
        if (this->_FirstName == "")
            std::cout << "invalid input" << std::endl;
    }
    while (this->_LastName == "")
    {
        std::cout << "Please enter your last name: ";
        if (!std::getline(std::cin, this->_LastName))
            exit (0);
        if (this->_LastName == "")
            std::cout << "invalid input" << std::endl;
    }
    while (this->_Nickname == "")
    {
        std::cout << "Please enter your nickname: ";
        if (!std::getline(std::cin, this->_Nickname))
            exit (0);
        if (this->_Nickname == "")
            std::cout << "invalid input" << std::endl;
    }
    while (this->_PhoneNumber == "")
    {
        std::cout << "Please enter your phone number: ";
        if (!std::getline(std::cin, this->_PhoneNumber))
            exit (0);
        if (this->_PhoneNumber == "")
            std::cout << "invalid input" << std::endl;
    }
    while (this->_DarkestSecret == "")
    {
        std::cout << "Please enter your darkest secret: ";
        if (!std::getline(std::cin, this->_DarkestSecret))
            exit (0);
        if (this->_DarkestSecret == "")
            std::cout << "invalid input" << std::endl;
    }
}

bool Contact::isEmpty()
{
    if (this->_FirstName.compare("") == 0)
        return (true);
    return (false);
}

void    Contact::clearContact()
{
    _FirstName = "";
    _LastName = "";
    _Nickname = "";
    _PhoneNumber = "";
    _DarkestSecret = "";
}

void    Contact::affContact(void)
{
    std::cout << "First name: ";
    std::cout << this->_FirstName << std::endl;
    std::cout << "Last name: ";
    std::cout << this->_LastName << std::endl;
    std::cout << "Nickname: ";
    std::cout << this->_Nickname << std::endl;
    std::cout << "Phone number: ";
    std::cout << this->_PhoneNumber << std::endl;
    std::cout << "Darkes secret: ";
    std::cout << this->_DarkestSecret << std::endl;
}