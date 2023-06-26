/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:53:28 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/26 14:24:18 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private:
        T* array;
        size_t _size;
    public:
        Array();
        Array(unsigned int n);
        Array(T const &copy);
        ~Array();
        Array    &operator=(const T &copy);
        T&  operator[](unsigned int n);
    public:
        size_t size(void) const;
    class InvalidIndexException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {return ("Invalid index");}
    };      
};

#endif