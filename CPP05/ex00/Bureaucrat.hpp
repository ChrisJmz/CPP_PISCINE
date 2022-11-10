/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:57:23 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/10 17:02:47 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HP
# include <iostream>
# include <string>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat & operator=(const Bureaucrat &assign);
        const std::string getName() const;
        int getGrade() const;
        class GradeTooHighException: public std::exception{
            virtual const char *what() const throw();
        };
        class GradeTooLowException: public std::exception{
            virtual const char *what() const throw();
        };
        void incrementGrade();
        void incrementGrade(int i);
        void decrementGrade();
        void decrementGrade(int i);
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &Bureaucrat);

#endif