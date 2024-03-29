/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:31:25 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/17 21:53:53 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

bool checkChar(std::string str)
{
    if (str.length() != 1)
        return (false);
    return (true);
}

bool checkInt(std::string str)
{
    int i;
    i = 0;
    if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
        return (false);
    if (str.length() < 2)
        return (false);
    while (str.c_str()[i])
    {
        if (isdigit(str.c_str()[i]))
            i++;
        else
            return (false);
    }
    return (true);
}

bool checkFloat(std::string str)
{
    int decimal = 0;
    size_t i = 1;
    
    if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
        return (false);
    if (str.length() < 2)
        return (false);
    while (i < str.length())
    {
        if (i == str.length() - 1 && str[i] == 'f')
            return (true);
        if (!isdigit(str[i]))
        {
            if (str[i] == '.')
            {
                if (decimal == 1)
                    return false;
                decimal = 1;
            }
            else
                return (false);
        }
        i++;
    }
    return (false);
}

bool checkDouble(std::string str)
{
    int decimal = 0;
    size_t i = 1;
    
    if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-')
        return (false);
    if (str.length() < 2)
        return (false);
    while (i < str.length())
    {
        if (!isdigit(str[i]))
        {
            if (str[i] == '.')
            {
                if (decimal == 1)
                    return (false);
                decimal = 1;
            }
            else
                return (false);
        }
        i++;
    }
    return (true);
}

bool checkException(std::string str)
{
    if (str == "nan" || str == "nanf" || str == "inf" || str == "inff" || str == "-inf")
        return (true);
    return (false);
}

void isChar(std::string const str)
{
    char c = str[0];
    if (c >= '0' && c <= '9')
        c -=48;
    if (static_cast<int>(c) < 32 || static_cast<int>(c) > 126)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
    std::cout.precision(15);
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void isInt(std::string const str)
{
    double res = strtod(str.c_str(), NULL);
    
    if (static_cast<int>(res) < 32 || static_cast<int>(res) > 126)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(res) << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(res) << std::endl;
    std::cout << "float: " << static_cast<float>(res) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(res) << ".0" <<std::endl;
}

int ft_point(std::string str)
{
    int i = 0;
    int j = 0;

    while (str[i])
    {
        if (str[i] == '.')
            break;
        i++;
    }
    if (str[i] != '.')
        return (0);
    while (str[i])
    {
        i++;
        j++;
    }
    return (j);
}

void isFloat(std::string const str)
{
    double res = strtod(str.c_str(), NULL);
    
    if (static_cast<int>(res) < 32 || static_cast<int>(res) > 126)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(res) << "'" << std::endl;
    std::cout.precision(ft_point(str));
    std::cout << "int: " << static_cast<int>(res) << std::endl;
    std::cout << "floatl: " << static_cast<float>(res) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(res) << std::endl;
}

void isDouble(std::string const str)
{
    double res = atof(str.c_str());

    if (static_cast<int>(res) < 32 || static_cast<int>(res) > 126)
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(res) << "'" << std::endl;
    std::cout.precision(ft_point(str));
    std::cout << "int: " << static_cast<int>(res) << std::endl;
    std::cout << "float: " << static_cast<float>(res) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(res) << std::endl;
}

void isExcept(std::string str)
{
    if (str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
    else if (str == "inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float inff" << std::endl;
        std::cout << "double: inf" << std::endl;
    }
    else if (str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
}