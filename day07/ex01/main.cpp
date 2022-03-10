/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:32:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 00:56:08 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
#include <iostream>

void    output(char c)
{
    std::cout << c << " ";
}

void    output(int n)
{
    std::cout << n << " ";
}

void    output(std::string str)
{
    std::cout << str << " ";
}

int     main()
{
    // std::string test = "hello world!";
    // std::string *ptr = &test;
    // // int n[4] = { 42, 69, 420, 666};
    // // std::string dd[3] = { "hey,", "wssup", "?"};

    // ::iter(ptr, 12, &output);
    // // iter(&n, 4, &output);
    // // iter(&test, 12, &output);
    return 0;
}