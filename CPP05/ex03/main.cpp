/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:39:11 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/16 22:44:25 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{
	Intern intern = Intern();
	Bureaucrat master = Bureaucrat("Master", 1);
	Form *form;
	try
	{
		form = intern.makeForm("shrubbery creation", "Target1");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("robotomy request", "Target2");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("presidential pardon", "Target3");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("wrong argument", "Target4");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
}