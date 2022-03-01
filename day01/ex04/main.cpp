/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 14:52:46 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 15:30:51 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename(av[1]);
		std::string s1(av[2]);
		std::string s2(av[3]);
		sed(filename,s1,s2);
	}
	else
	{
		std::cerr << "Enter 3 parameters: Filename string1 string2" << std::endl;
		return (1);
	}
	return (0);
}