/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:07:07 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/19 13:09:36 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Data.hpp"
 #include <iostream>
 #include <stdint.h>
 
 uintptr_t serialize(Data *ptr)
 {
    return reinterpret_cast<uintptr_t>(ptr);
 }

 Data* deserialize(uintptr_t raw)
 {
    return reinterpret_cast<Data*>(raw);
 }

 int main()
 {
    Data data = Data(10);
    std::cout << data;
    Data *data2 = deserialize(serialize(&data));
    std::cout << *data2;
 }