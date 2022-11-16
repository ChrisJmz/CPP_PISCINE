/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:12:55 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/16 21:49:03 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat & operator=(const Bureaucrat &assign);
        ~Bureaucrat();
        const std::string getName() const;
        int getGrade() const;
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            virtual const char* what() const throw(); 
        };
        void incrementGrade();
        void incrementGrade(int i);
        void decrementGrade();
        void decrementGrade(int i);
        void signForm(Form &form);
        void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat);

#endif