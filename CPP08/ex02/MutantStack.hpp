/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:49:39 by cjimenez          #+#    #+#             */
/*   Updated: 2022/12/01 20:10:39 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <class T>
class MutantStack: public std::stack <T>
{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        
        MutantStack()
        {
            
        };
        MutantStack(MutantStack &copy) : std::stack<T>(copy)
        {

        };
        MutantStack &operator=(MutantStack const & value)
        {
            this->c = value->c();
        }
        iterator begin(void)
        {
            return this->c.begin();
        }
        iterator end(void)
        {
            return this->c.end();
        }
};

#endif