/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 20:11:10 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 21:19:05 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include "Integer.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    // Array<int> arr(4);

    // arr[0] = 42;
    // arr[1] = 69;
    // arr[2] = 420;
    // arr[3] = 666;
    // try {
    //     arr[4] = 666;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // std::cout << arr;

    Array<Integer> ints(4);
    
    // ints[0] = 42;
    // ints[1] = 69;
    // ints[2] = 420;
    // ints[3] = 666;
    try {
        ints[4] = 666;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // std::cout << ints;
    return 0;
} 