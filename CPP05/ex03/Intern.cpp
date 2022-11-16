/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:30:49 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/16 22:43:32 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
}

Intern::~Intern()
{
}

Intern & Intern::operator=(const Intern &assign)
{
    (void)assign;
    return *this;
}

static Form *createShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

static Form *createRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

static Form *createPresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

const char *Intern::NonExistingForName::what() const throw()
{
    return "Non existing form name";
}

Form *Intern::makeForm(std::string formName, std::string targetName)
{
    FormsList forms[3] =
    {
        {"shrubbery creation", &createShrubberyCreationForm},
        {"robotomy request", &createRobotomyRequestForm},
        {"presidential pardon", &createPresidentialPardonForm}
    };
    for (int i = 0; i < 3; i++)
    {
        if (forms[i].formName == formName)
        {
            Form *form = forms[i].creator(targetName);
            std::cout << "Intern creates " << *form << std::endl;
            return form;
        }
    }
    std::cout << "Please use:" << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "- " << forms[i].formName << std::endl;
    }
    throw Intern::NonExistingForName();
}