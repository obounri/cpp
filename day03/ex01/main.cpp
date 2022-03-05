/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:17:12 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 21:00:50 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int     main()
{
	ScavTrap	a("CL-V98");
	ScavTrap	b(a);

	b.setName("CP-D52");
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.guardGate();
	b.beRepaired(15);
	return (0);
}