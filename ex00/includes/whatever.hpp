/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:37:39 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/25 14:54:39 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T >
void swap (T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template< typename T >
T min(T a, T b)
{return (a < b) ? a : b;}

template< typename T >
T max(T a, T b)
{return (a > b) ? a : b;}

#endif