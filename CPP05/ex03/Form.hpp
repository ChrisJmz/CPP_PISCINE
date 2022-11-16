/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:04:49 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/16 22:56:22 by cjimenez         ###   ########.fr       */
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
    protected:
        Form();
        Form(const std::string name, int gradeToSign, int gradeToExecute);
        virtual void executed() const = 0;
        const std::string   _name;
        bool                _signed;
        const int           _gradeToExecute;
        const int           _gradeToSign;
    public:
        Form(const Form &copy);
        virtual ~Form();
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
        class NotSignedException: public std::exception{
            virtual const char* what() const throw();
        };
        void beSigned(Bureaucrat bureaucrat);
        void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &stream, Form const &bureaucrat);

#endif