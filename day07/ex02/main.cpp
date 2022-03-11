/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:11:10 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 23:29:01 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Integer.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    {
    Array<int> arr(4);

    arr[0] = 42;
    arr[1] = 69;
    arr[2] = 420;
    arr[3] = 666;
    try {
        arr[4] = 666;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << arr << std::endl;
    }

    {
    Array<Integer> arr(4);

    arr[0] = 42;
    arr[1] = 69;
    arr[2] = 420;
    arr[3] = 666;
    try {
        arr[4] = 666;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << arr << std::endl;
    }

    {
    Array<std::string> arr(2);

    arr[0] = "Hello";
    arr[1] = "World!";
    try {
        arr[4] = "666";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << arr << std::endl;
    }

    return 0;
} 