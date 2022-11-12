/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:04:49 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/12 14:27:40 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string.h>
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToExecute;
        const int           _gradeToSign;
    public:
        Form();
        Form(const Form &copy);
        Form(const std::string name, int gradeToSign, int gradeToExecute);
        ~Form();
        Form & operator=(const Form &assign);
        const std::string getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        class GradeTooLowException: public std::exception{
            virtual const char* what() const throw();
        };
        class GradeTooHighException: public std::exception{
            virtual const char* what() const throw();
        };
        class AlreadySignedException: public std::exception{
            virtual const char* what() const throw();
        };
        void beSigned(Bureaucrat bureaucrat);
};

std::ostream &operator<<(std::ostream &stream, Form const &bureaucrat);

#endif