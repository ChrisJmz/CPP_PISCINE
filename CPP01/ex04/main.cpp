/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:51:07 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/20 20:00:59 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::ifstream   file(av[1]);
    std::string     search(av[2]);
    std::string     replace(av[3]);
    std::string     tmp;
    std::string     tmp2;
    std::string     name;
    std::string     line;
    
    if (ac != 4)
        return (std::cerr << "Usage ./sed [file] [find] [replace]" << std::endl, 1);       
    
    name = (av[1]);
    name += ".replace";
    
    if (!file)
        return (std::cerr << "Couldn't open the file" << std::endl, 1);
    std::ofstream   output(name.c_str());
    if (search == replace)
    {
        while (std::getline(file, line))
            output << line << std::endl;
        output.close();
        return (0);
    }
    while (std::getline(file, line))
    {
        while (1)
        {
            std::size_t found = line.find(search);
            if (found != std::string::npos)
            {
                tmp = line.substr(0, found);
                tmp = tmp + replace;
                tmp2 = line.substr(found + search.length(), line.length());
                line = tmp + tmp2;
            }
            else
                break;
        }
        output << line << std::endl;
    }
    output.close();
    std::cout << "[FINISHED]" << std::endl;
}