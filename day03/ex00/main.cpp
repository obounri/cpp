/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:17:12 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 03:12:54 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main()
{
	ClapTrap	a("Zeus");
	ClapTrap	b(a);

	b.setName("Metis");
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(b.getEnergyPoints());
	return (0);
}