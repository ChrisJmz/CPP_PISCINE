/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:55:01 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/19 12:56:50 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP
# include <iostream>
# include <string>

class Data
{
    private:
        int _intData;
    public:
        Data();
        Data(const Data &copy);
        Data(int intData);
        ~Data();
        Data & operator=(const Data &assign);
        int getIntData() const;
};

std::ostream & operator<<(std::ostream &stream, const Data &object);

#endif