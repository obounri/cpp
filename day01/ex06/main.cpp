/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:01:11 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 16:55:36 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen karen;

    if (ac == 2)
        karen.complain(av[1]);
    else
        std::cout << "Karen went crazy! No such level." << std::endl;
    
    return 0;
}