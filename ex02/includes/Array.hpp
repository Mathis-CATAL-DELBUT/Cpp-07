/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 12:53:28 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/26 15:21:34 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array
{
    private:
        T* array;
        unsigned int _size;
    public:
        Array()
        {
            _size = 0;
            array = NULL;
        }
        Array(unsigned int n)
        {
            array = new T [n];
            _size = n;
        }
        Array(Array const &copy) : _size(copy._size)
        {
            array = new T [_size];
            for(unsigned int i = 0; i < _size; i++)
            {array[i] = copy.array[i];}
        }
        ~Array()
        {
          if (array)
            delete [] array;
        }
        Array    &operator=(const T &copy)
        {
            if (this != copy)
            {
                ~Array();
                _size = copy.size();
                array = new T [_size];
                for(unsigned int i = 0; i < _size; i++)
                {array[i] = copy.array[i];}
            }
            return(this);
        }
        T&  operator[](unsigned int n)
        {
            if (n < _size)
                return array[n];
            throw InvalidIndexException();
        }
    
    public:
        unsigned int size(void) const
        {return _size;}
    class InvalidIndexException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {return ("Invalid index");}
    };      
};

#endif