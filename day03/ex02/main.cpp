/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:17:12 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 21:06:06 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int     main()
{
	FragTrap	a("CL-V98");
	FragTrap	b(a);

	b.setName("CP-D52");
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.highFivesGuys();
	b.beRepaired(15);
	return (0);
}