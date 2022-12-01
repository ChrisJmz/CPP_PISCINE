/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:14:43 by cjimenez          #+#    #+#             */
/*   Updated: 2022/12/01 19:41:32 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
    _N = 0;
}

Span::Span(const Span &copy)
{
    _N = copy._N;
    _vector.clear();
    _vector.insert(_vector.end(), copy._vector.begin(), copy._vector.end());
}

Span::~Span()
{
}

Span::Span(unsigned int N)
{
    _N = N;
}


Span & Span::operator=(const Span &assign)
{
    if (this != &assign)
    {
        _N = assign._N;
        _vector.clear();
        _vector.insert(_vector.end(), assign._vector.begin(), assign._vector.end());
    }
    return *this;
}

void Span::addNumber(int number)
{
    if (_vector.size() == _N)
        throw Span::RangeException();
    _vector.push_back(number);
}

int Span::longestSpan()
{
    if (_vector.size() < 2)
        throw Span::EmptyException();
    int max = *std::max_element(_vector.begin(), _vector.end());
    int min = *std::min_element(_vector.begin(), _vector.end());
    return (max - min);
}

int Span::shortestSpan()
{
    if (_vector.size() < 2)
        throw Span::EmptyException();
    std::vector<int> copy = std::vector<int>(_vector);
    std::sort(copy.begin(), copy.end());
    int result = copy[1] - copy[0];
    for (unsigned long i = 2; i < copy.size(); i++)
    {
        if (copy[i] - copy[i - 1] < result)
            result = copy[i] - copy[i - 1];
    }                                                       
    return result;
}

void Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it < end; it++)
    {
        if (_vector.size() == _N)
            throw Span::RangeException();
        _vector.push_back(*it);
    }
}

const char *Span::RangeException::what() const throw()
{
    return "Element out of range";
}

const char *Span::EmptyException::what() const throw()
{
    return "Span is empty";
}