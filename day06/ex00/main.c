/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 19:47:15 by obounri           #+#    #+#             */
/*   Updated: 2022/03/09 20:02:25 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iomanip>

int		main(int ac, char **av)
{
	char			c;
	int				i;
	float			f;
	double			d;

	if (ac == 2) {
		Convert		conv(av[1]);
	
		try {
			std::cout << "char: ";
			c = conv;
			std::cout << c << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "int: ";
			i = conv;
			std::cout << i << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "float: " << std::fixed;
			f = conv;
			std::cout << std::setprecision(1) << f << "f" << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		try {
			std::cout << "double: " << std::fixed;
			d = conv;
			std::cout << std::setprecision(1) << d << std::endl;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "One conversion at a time ;)" << std::endl;

	return (0);
}