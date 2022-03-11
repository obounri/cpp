/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:32:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/12 00:09:27 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"
#include "iter.hpp"
#include "templates.hpp"

#include <iostream>

int     main()
{   
    int *n = new int[4];
    n[0] = 42;
    n[1] = 69;
    n[2] = 420;
    n[3] = 666;
    std::string dd[3] = { "hey,", "wssup", "?"};
    Integer nbr[4];
    nbr[0] = 42;
    nbr[1] = 69;
    nbr[2] = 420;
    nbr[3] = 666;

    iter(n, 4, &output);
    std::cout << std::endl;
    iter(dd, 3, &output);
    std::cout << std::endl;
    iter(nbr, 4, &output);
    std::cout << std::endl;
    iter(nbr, 4, &multiply);
    iter(nbr, 4, &output);
    std::cout << std::endl;
    return 0;
}