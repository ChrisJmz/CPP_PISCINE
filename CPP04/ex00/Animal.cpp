/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:49:49 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 15:52:41 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
    _type = "default animal";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy Animal constructor called" << std::endl;
    _type = copy.getType();
}

Animal & Animal::operator=(const Animal &assign)
{
    _type = assign.getType();
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

void Animal::makeSound() const
{
    std::cout << "Default Animal sound" << std::endl;
}