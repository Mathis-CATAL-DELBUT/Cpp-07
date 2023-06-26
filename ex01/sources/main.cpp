/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:51:22 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/06/26 11:20:57 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int tab[3] = {1,2,3};
    float tabf[3] = {1.1,2.2,3.3};
    std::string tabs[3] = {"Hello", "World", "!"};
    size_t size = 3;
    iter(tab, size, my_fonction);
    std::cout << "----------------" << std::endl;
    iter(tabf, size, my_fonction);
    std::cout << "----------------" << std::endl;
    iter(tabs, size, my_fonction);
}