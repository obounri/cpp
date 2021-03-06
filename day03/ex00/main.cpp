/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:17:12 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 20:42:48 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main()
{
	ClapTrap	a("CL-V98");
	ClapTrap	b(a);

	b.setName("CP-D52");
	a.setAttackDamage(25);
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	b.beRepaired(b.getEnergyPoints());
	return (0);
}