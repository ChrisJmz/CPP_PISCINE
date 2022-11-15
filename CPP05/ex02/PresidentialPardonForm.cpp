/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:15:10 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/15 16:21:59 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5)
{
    _target = "Default target";
    //srand(time(NULL));
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5)
{
    _target = target;
    //srand(time(NULL));
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form(copy)
{
    _target = copy.getTarget();
    //srand(time(NULL));
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
    Form::operator=(assign);
    _target = assign.getTarget();
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return _target;
}

void PresidentialPardonForm::executed() const
{
    std::cout << _target << " has been apologized by Zaphod Beeblebrox" << std::endl;
}

