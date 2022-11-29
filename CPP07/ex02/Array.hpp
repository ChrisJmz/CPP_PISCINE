/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:45:07 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/29 19:58:35 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template<typename T>
class Array
{
    private:
        T *_array;
        unsigned int _size;
    public:
        Array ()
        {
            _array = NULL;
            _size = 0;
        };
        Array (unsigned int n)
        {
            _array = new T[n]();
            _size = n; 
        };
        Array (const Array<T> &copy)
        {
            _array = new T[copy.size()];
            _size = copy.size();
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = copy._array[i];
        };
        Array<T>&operator=(const Array<T> &assign)
        {
            if (this != &assign)
            {
                delete[] _array;
                _array = new T[assign.size()];
                _size = assign.size();
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = assign._array[i];
            }
            return (*this);
        };
        ~Array()
        {
            delete[] _array;
        };
        T& operator[](unsigned int index)
        {
            if (index >= _size)
                throw std::overflow_error("out of range");
            return _array[index];
        };
        unsigned int size() const
        {
            return _size;
        };
};

#endif