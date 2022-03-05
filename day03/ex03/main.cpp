/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:17:12 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 22:00:31 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main()
{
	DiamondTrap	a("CL-V98");
	DiamondTrap	b(a);

	b.setName("CP-D52");
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.highFivesGuys();
	a.guardGate();
	b.beRepaired(15);
	a.whoAmI();
	return (0);
}