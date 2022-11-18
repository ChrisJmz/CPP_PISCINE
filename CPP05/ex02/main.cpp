/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:40:02 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/18 16:56:36 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Bureaucrat.hpp"
// #include "ShrubberyCreationForm.hpp"
// #include "RobotomyRequestForm.hpp"
// #include "PresidentialPardonForm.hpp"

// int	main()
// {
// 	{
// 		std::cout << "===== Form Error =====" << std::endl;
// 		PresidentialPardonForm form = PresidentialPardonForm("Error");
// 		Bureaucrat george = Bureaucrat("George", 20);
// 		try
// 		{
// 			form.execute(george);
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		george.signForm(form);
// 		try
// 		{
// 			form.execute(george);
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		Bureaucrat master = Bureaucrat("Master", 1);
// 		try
// 		{
// 			form.execute(master);
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 	}
// 	{
// 		std::cout << "===== Bureaucrat sign Error =====" << std::endl;
// 		PresidentialPardonForm form = PresidentialPardonForm("Error");
// 		Bureaucrat george = Bureaucrat("George", 20);
// 		george.executeForm(form);
// 		george.signForm(form);
// 		george.executeForm(form);
// 		Bureaucrat master = Bureaucrat("Master", 1);
// 		master.executeForm(form);
// 	}
// 	{
// 		std::cout << "===== ShrubberyCreationForm =====" << std::endl;
// 		ShrubberyCreationForm form = ShrubberyCreationForm("Test");
// 		Bureaucrat george = Bureaucrat("George", 1);
// 		george.signForm(form);
// 		george.executeForm(form);
// 	}
// 	{
// 		std::cout << "===== RobotomyRequestForm =====" << std::endl;
// 		RobotomyRequestForm form = RobotomyRequestForm("Test");
// 		Bureaucrat george = Bureaucrat("George", 1);
// 		george.signForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 		george.executeForm(form);
// 	}
// 	{
// 		std::cout << "===== PresidentialPardonForm =====" << std::endl;
// 		PresidentialPardonForm form = PresidentialPardonForm("Test");
// 		Bureaucrat george = Bureaucrat("George", 1);
// 		george.signForm(form);
// 		george.executeForm(form);
// 	}
// }

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void){
	std::cout << "[ Grade too low to exec PresidentialPardonForm ]" << std::endl;
	try{
		PresidentialPardonForm test("The user");
		const Bureaucrat	executor("executor", 100);

		test.isSigned();
		test.execute(executor);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << "[ Exec PresidentialPardonForm ]" << std::endl;
	try{
		PresidentialPardonForm test("The user");
		const Bureaucrat	executor("executor", 1);

		test.isSigned();
		test.execute(executor);
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "[ PresidentialPardonForm not signed ]" << std::endl;
	try{
		PresidentialPardonForm test("The user");
		const Bureaucrat	executor("executor", 1);

		//test.isSigned();
		test.execute(executor);
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
		
	std::cout << "[ Grade too low to exec RobotomyRequestForm ]" << std::endl;
	try{
		RobotomyRequestForm test = RobotomyRequestForm("user");
		const Bureaucrat	executor("executor", 100);

		test.isSigned();
		test.execute(executor);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << "[ Exec RobotomyRequestForm ]" << std::endl;
	try{
		RobotomyRequestForm test = RobotomyRequestForm("user");
		const Bureaucrat	executor("executor", 1);

		test.isSigned();
		test.execute(executor);
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "[ RobotomyRequestForm not signed ]" << std::endl;
	try{
		RobotomyRequestForm test = RobotomyRequestForm("user");
		const Bureaucrat	executor("executor", 1);

		//test.isSigned();
		test.execute(executor);
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "[ Shruberry grade too low ]" << std::endl;
	try{
		ShrubberyCreationForm test("garden");
		const Bureaucrat	executor("executor", 149);

		test.isSigned();
		test.execute(executor);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << "[ Exec Shruberry ]" << std::endl;
	try{
		ShrubberyCreationForm test("garden");
		const Bureaucrat	executor("executor", 1);

		test.isSigned();
		test.execute(executor);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl << std::endl;
	}
	std::cout << std::endl;

	std::cout << "[ Shruberry not signed ]" << std::endl;
	try{
		ShrubberyCreationForm test("garden");
		const Bureaucrat	executor("executor", 1);

		//test.isSigned();
		test.execute(executor);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl << std::endl;
	}

	std::cout << "[ Bureaucrat executeForm succeed ]" << std::endl;
	try{
		RobotomyRequestForm test = RobotomyRequestForm("user");
		Bureaucrat	executor = Bureaucrat("Executor", 1);

		test.isSigned();
		executor.executeForm(test);
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "[ Bureaucrat executeForm failed ]" << std::endl;
	try{
		RobotomyRequestForm test = RobotomyRequestForm("user");
		Bureaucrat	executor = Bureaucrat("Executor", 45);

		test.beSigned(executor);
		test.isSigned();
		executor.executeForm(test);
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return (0);
}