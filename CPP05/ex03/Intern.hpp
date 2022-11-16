/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:20:23 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/16 22:37:15 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        typedef Form* (*CreateFormFunction)(std::string target);
        typedef struct {std::string formName; CreateFormFunction creator;} FormsList;
    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();
        Intern & operator=(const Intern &assign);
        Form *makeForm(std::string formName, std::string targetName);
        class NonExistingForName: public std::exception {
            virtual const char *what() const throw();
        };
};

#endif