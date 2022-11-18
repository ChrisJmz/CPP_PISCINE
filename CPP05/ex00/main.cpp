/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/11/18 15:57:51 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int	main()
// {
// 	{
// 		std::cout << "===== Basic test =====" << std::endl;
// 		Bureaucrat george = Bureaucrat("George", 35);
// 		std::cout << george << std::endl;
// 		george.incrementGrade();
// 		std::cout << george << std::endl;
// 		george.incrementGrade(10);
// 		std::cout << george << std::endl;
// 		george.decrementGrade();
// 		std::cout << george << std::endl;
// 		george.decrementGrade(10);
// 		std::cout << george << std::endl;
// 	}
// // 	{
// 		std::cout << "\e[0;33m===== Constructor test =====\e[0m" << std::endl;
// 		try
// 		{
// 			Bureaucrat george = Bureaucrat("George", 35);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Bureaucrat george = Bureaucrat("George", 1);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Bureaucrat george = Bureaucrat("George", 150);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Bureaucrat george = Bureaucrat("George", 0);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Bureaucrat george = Bureaucrat("George", 167);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 	}
// 	{
// 		std::cout << "\e[0;33m===== Increment test =====\e[0m" << std::endl;
// 		Bureaucrat george = Bureaucrat("George", 2);
// 		try
// 		{
// 			george.incrementGrade();
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		std::cout << george << std::endl;
// 		try
// 		{
// 			george.incrementGrade();
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		std::cout << george << std::endl;
// 		try
// 		{
// 			george.incrementGrade();
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 	}
// 	{
// 		std::cout << "\e[0;33m===== Decrement test =====\e[0m" << std::endl;
// 		Bureaucrat george = Bureaucrat("George", 149);
// 		try
// 		{
// 			george.decrementGrade();
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		std::cout << george << std::endl;
// 		try
// 		{
// 			george.decrementGrade();
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		std::cout << george << std::endl;
// 		try
// 		{
// 			george.decrementGrade();
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 	}
// }

int main (void){
	Bureaucrat patrick("Patrick", 100);
	std::cout << patrick << std::endl;
	patrick.incrementGrade();
	std::cout << patrick << std::endl;
	patrick.decrementGrade();
	std::cout << patrick << std::endl;

	try
	{
		Bureaucrat bob("Bob", 0);
		std::cout << bob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bob("bob", 1000);
		std::cout << bob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.decrementGrade();
		std::cout << bob << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    return 0;
}