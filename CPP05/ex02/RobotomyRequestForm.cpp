/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:25:49 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/15 16:50:23 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm() : Form("RobotmyRequestForm", 72, 45)
{
    _target = "Default target";
    //srand(time(NULL));
}

RobotmyRequestForm::RobotmyRequestForm(std::string target) : Form("RobotmyRequestForm", 72, 45)
{
    _target = target;
    //srand(time(NULL));
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm &copy) : Form(copy)
{
    _target = copy.getTarget();
    //srand(time(NULL));
}

RobotmyRequestForm::~RobotmyRequestForm()
{
}

RobotmyRequestForm & RobotmyRequestForm::operator=(const RobotmyRequestForm &assign)
{
    Form::operator=(assign);
    _target = assign.getTarget();
    return *this;
}

std::string RobotmyRequestForm::getTarget() const
{
    return _target;
}

void RobotmyRequestForm::executed() const
{
    if (rand() % 2 == 0)
        std::cout << _target << " was robotized" << std::endl;
    else
        std::cout << "robotization failed!" << std::endl;
}