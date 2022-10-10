/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:10:22 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/10 15:27:43 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact (void) {
    return ;
}

Contact::~Contact (void) {
    return ;
}

void Contact::setFirstName(std::string value) {
    this->_FirstName = value;
}

void Contact::setLastName(std::string value) {
    this->_LastName = value;
}

void Contact::setNickname(std::string value) {
    this->_Nickname = value;
}

void Contact::setPhoneNumber(std::string value) {
    this->_PhoneNumber = value;
}

void Contact::setDarkestSecret(std::string value) {
    this->_DarkestSecret = value;
}

std::string Contact::getFirstName(void) {
    return this->_FirstName;
}

std::string Contact::getLastName(void) {
    return this->_LastName;
}

std::string Contact::getNickname (void) {
    return this->_Nickname;
}

std::string Contact::getPhoneNumber(void) {
    return this->_PhoneNumber;
}

std::string Contact::getDarkestSecret (void){
    return this->_DarkestSecret;
}
