/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:08:08 by cjimenez          #+#    #+#             */
/*   Updated: 2022/12/01 15:14:35 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vector;
    public:
        Span();
        Span(const Span &copy);
        Span(unsigned int N);
        ~Span();
        Span & operator=(const Span &assign);
        class RangeException : public std::exception {
            virtual const char *what() const throw();
        };
        class EmptyException : public std::exception {
            virtual const char *what() const throw();
        };
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        void fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif