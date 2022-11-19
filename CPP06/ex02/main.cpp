/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:39:15 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/19 13:55:55 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base* generate(void)
{
    int random = rand()%3;
    if (random == 1)
        return new A();
    else if (random == 2)
        return new B();
    else
        return new C();
}

void identify (Base* p)
{
    A* a = dynamic_cast<A*>(p);
    if (a)
        std::cout << "type from pointer is: A";
    B* b = dynamic_cast<B*>(p);
    if (b)
        std::cout << "type from pointer is: B";
    C* c = dynamic_cast<C*>(p);
    if (c)
        std::cout << "type of pointer is: C";
}

void identify (Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "type of reference is: A";
    }
    catch(std::exception& e)
    {
        (void)e;
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "type of reference is: B";
    }
    catch(std::exception& e)
    {
        (void)e;
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "type of reference is: C";
    }
    catch(std::exception& e)
    {
        (void)e;
    }
}

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        Base *p = generate();
        std::cout << "Test " << i << ": ";
        identify(p);
        std::cout << ", ";
        identify(p);
        std::cout << std::endl;
        delete(p); 
    }
}