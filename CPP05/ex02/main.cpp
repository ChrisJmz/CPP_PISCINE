/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/11/15 14:58:48 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main (void){
    Form test("TestFormNumberOne", 120, 120);
    const Bureaucrat signatory("Signatory", 1);

    std::cout << test << std::endl;
    test.beSigned(signatory);
    std::cout << test << std::endl;

    std::cout << std::endl << "[ Invalid grade bureaucrat ]" << std::endl;
    try{
        Form NumberTwo("NumberTwo", 120, 120);
        const Bureaucrat signatory2("Signatory2", 130);

        std::cout << NumberTwo << std::endl;
        NumberTwo.beSigned(signatory2);
        std::cout << NumberTwo << std::endl;
    }
    catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "[ Invalid form with grade 0, 120 ]" << std::endl;
    try{
        Form NumberThree("NumberThree", 125, 250);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "[ Invalid form with grade 125, 250 ]" << std::endl;
    try{
        Form NumberFour("NumberFour", 125, 250);
    }
    catch (std::exception& e){
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
// int	main()
// {
// 	{
// 		std::cout << "===== Basic test =====" << std::endl;
// 		Form form = Form("Super form", 42, 41);
// 		std::cout << form << std::endl;
// 	}
// 	{
// 		std::cout << "===== Exceptions test =====" << std::endl;
// 		try
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 0, 42);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 42, 0);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 164, 42);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 42, 164);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 	}
// 	{int	main()
// {
// 	{
// 		std::cout << "===== Basic test =====" << std::endl;
// 		Form form = Form("Super form", 42, 41);
// 		std::cout << form << std::endl;
// 	}
// 	{
// 		std::cout << "===== Exceptions test =====" << std::endl;
// 		try
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 0, 42);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 42, 0);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 164, 42);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 		try
// 		{
// 			Form form = Form("Super form", 42, 164);
// 			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
// 		}
// 		catch(const std::exception& e)
// 		{
// 			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 		}
// 	}
// 	{
// 		std::cout << "===== BeSigned test =====" << std::endl;
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 2 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 45);
// 			std::cout << george << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 3 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 		}
// 	}
// 	{
// 		std::cout << "===== Sign test =====" << std::endl;
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 2 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 45);
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 3 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 	}
// }
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 2 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 45);
// 			std::cout << george << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 3 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 			try
// 			{
// 				form.beSigned(george);
// 			}
// 			catch(const std::exception& e)
// 			{
// 				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
// 			}
// 			std::cout << form << std::endl;
// 		}
// 	}
// 	{
// 		std::cout << "===== Sign test =====" << std::endl;
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 2 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 45);
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 		std::cout << "----- Test 3 -----" << std::endl; 
// 		{
// 			Form form = Form("Super form", 42, 42);
// 			std::cout << form << std::endl;
// 			Bureaucrat george = Bureaucrat("George", 40);
// 			std::cout << george << std::endl;
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 			george.signForm(form);
// 			std::cout << form << std::endl;
// 		}
// 	}
// }