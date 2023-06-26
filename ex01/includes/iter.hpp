/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:51:24 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/26 11:21:47 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template < typename T>
void my_fonction(T test)
{
    std::cout << test << std::endl;
}

template < typename T>
void iter(T *tab, size_t size, void (*ptr_fonct)(T& test))
{
    for (size_t i = 0; i < size; i++)
    {ptr_fonct(tab[i]);}
}

#endif