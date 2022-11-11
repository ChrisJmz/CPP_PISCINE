/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:12:45 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/11 18:15:02 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name")
{
    std::cout << "Default constructor called" << std::endl;
    _grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName())
{
    std::cout << "Copy constructor called" << std::endl;
    _grade = copy.getGrade();
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
    _grade = assign.getGrade();
    return *this;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

const std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void Bureaucrat::incrementGrade(int i)
{
    if (_grade - i < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        _grade -= i;
}

void Bureaucrat::incrementGrade()
{
    incrementGrade(1);
}

void Bureaucrat::decrementGrade(int i)
{
    if (_grade + i > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        _grade += i;
}

void Bureaucrat::decrementGrade()
{
    decrementGrade(1);
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
    stream << bureaucrat.getName() << " bureau grade " << bureaucrat.getGrade() << std::endl;
    return stream;
}
