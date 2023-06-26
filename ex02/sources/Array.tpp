/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:10:29 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/26 14:21:15 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array()
{
    _size = 0;
    array = NULL;
}

Array::Array(unsigned int n)
{
    array = new T [n];
    _size = n;
}

Array::Array(T const &copy)
{
    _size = copy.size();
    array = new T [size];
    for(int i = 0; i < size; i++)
    {array[i] = copy[i];}
}

Array::~Array()
{
    if (array)
        delete [] array;
}

size_t Array::size()
{return _size;}

Array Array::&operator=(const T copy)
{
    if (this != copy)
    {
        ~Array();
        _size = copy.size();
        array = new T [size];
        for(int i = 0; i < size; i++)
        {array[i] = copy[i];}
    }
    return(this);
}

T Array::&oprator[](unsigned int n)
{
    if (n < _size)
        return array[n];
    throw InvalidIndexException();
}