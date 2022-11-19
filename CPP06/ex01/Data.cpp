/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:57:18 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/19 12:59:47 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
    _intData = 0;
}

Data::Data(const Data &copy)
{
    _intData = copy.getIntData();
}

Data::Data(int intData)
{
    _intData = intData;
}

Data::~Data()
{
}

Data & Data::operator=(const Data &assign)
{
    _intData = assign.getIntData();
    return *this;
}

int Data::getIntData() const
{
    return _intData;
}

std::ostream & operator<<(std::ostream &stream, const Data &object)
{
    stream << "Data " << object.getIntData() << " stored at " << &object << std::endl;
    return stream;
}
