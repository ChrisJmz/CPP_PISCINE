/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:46:32 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 15:49:41 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &copy);
        Animal & operator=(const Animal &assign);
        virtual ~Animal();
        std::string getType() const;
        virtual void makeSound() const;
};

#endif