/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:17:04 by obounri           #+#    #+#             */
/*   Updated: 2022/03/14 00:00:57 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "Integer.hpp"

int main()
{
    {
        int ints[] = {16,2,77,29};
        std::vector<int>v(ints, ints+4);
        
        try {
            int found = easyfind(v, 2);
            std::cout << found << std::endl;
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }

    {
        Integer ints[] = {16,2,77,29};
        std::vector<Integer>v(ints, ints+4);
        try {
            Integer found = easyfind(v, 0);
            std::cout << found << std::endl;
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }
    

    return 0;
}