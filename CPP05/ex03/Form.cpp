/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:20:02 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/16 21:45:50 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default Form"), _gradeToExecute(1), _gradeToSign(1)
{
    _signed = false; 
}

Form::Form(const Form &copy): _name(copy.getName()), _gradeToExecute(copy.getGradeToExecute()), _gradeToSign(copy.getGradeToSign())
{
    _signed = copy.isSigned();
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute): _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    else
        _signed = false;
}

Form::~Form()
{
}

Form & Form::operator=(const Form &assign)
{
    _signed = assign.isSigned();
    return *this;
}

const std::string Form::getName() const
{
    return _name;
}

bool Form::isSigned() const
{
    return _signed;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "grade is too low";
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "grade is too high";
}

const char* Form::AlreadySignedException::what() const throw()
{
    return "Form is already signed";
}

const char* Form::NotSignedException::what() const throw()
{
    return "Form is not signed";
}

void Form::beSigned(Bureaucrat bureaucrat)
{
    if (_signed)
        throw Form::AlreadySignedException();
    if (bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
    if (!_signed)
        throw Form::NotSignedException();
    if (executor.getGrade() <= _gradeToExecute)
        executed();
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &stream, Form const &form)
{
    stream << form.getName() << ", " << (form.isSigned() ? "Signed" : "Not Signed") << ", Grade to sign: " << form.getGradeToSign() << ", Grade to execute: " << form.getGradeToExecute();
    return stream;
}

