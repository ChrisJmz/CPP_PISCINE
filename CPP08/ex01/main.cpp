/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:47:50 by cjimenez          #+#    #+#             */
/*   Updated: 2022/12/01 20:28:45 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    {
        std::cout << "===== Sujet =====" << std::endl;
        Span sp = Span(6);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        std::cout << "===== cas d'erreur =====" << std::endl;
        Span error = Span(1);
        error.addNumber(1);
        try
        {
            std::cout << "[adding 1]: ";
            error.addNumber(1);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "[shortest span]: " << error.shortestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            std::cout << "[longest span]: " << error.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        {
            std::cout << "========== fill ==========" << std::endl;
            std::vector<int> vect;
            for(int i = 0; i < 100; i++)
                vect.push_back(i);
            Span sp = Span(100);
            sp.fill(vect.begin(), vect.end());
            std::cout << "shortest: " << sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
    	}
        
        {
            std::cout << "===== testing 42000 =====" << std::endl;
            Span sp = Span(42000);
            for (int i = 0; i < 42000; i++)
                sp.addNumber(i);
            std::cout << "shortest: " << sp.shortestSpan() << std::endl;
            std::cout << "longest: " << sp.longestSpan() << std::endl;
        }
    }
}