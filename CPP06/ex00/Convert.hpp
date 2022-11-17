/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:13:44 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/17 15:29:56 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <limits.h>

bool checkChar(std::string str);
bool checkInt(std::string str);
bool checkFloat(std::string str);
bool checkDouble(std::string str);
bool checkException(std::string str);

void isChar(std::string const str);
void isInt(std::string const str);
void isFloat(std::string const str);
void isDouble(std::string const str);
void isExcept(std::string const str);

#endif