/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:21:10 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/04 16:29:09 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	{
// 		std::cout << "------------- Gived test -------------" << std::endl;
// 		const Animal* meta = new Animal();
// 		const Animal* dog = new Dog();
// 		const Animal* cat = new Cat();
// 		std::cout << dog->getType() << " " << std::endl;
// 		std::cout << cat->getType() << " " << std::endl;
// 		dog->makeSound();
// 		cat->makeSound();
// 		meta->makeSound();
// 		delete(meta);
// 		delete(dog);
// 		delete(cat);
// 	}
// 	{
// 		std::cout << "------------- Wrong animal test -------------" << std::endl;
// 		const WrongAnimal* meta = new WrongAnimal();
// 		const WrongAnimal* cat = new WrongCat();
// 		std::cout << cat->getType() << " " << std::endl;
// 		cat->makeSound();
// 		meta->makeSound();
// 		delete(meta);
// 		delete(cat);
// 	}
// 	return 0;
// }

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
return 0;
}