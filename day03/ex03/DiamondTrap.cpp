/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:38:44 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 22:42:38 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) {
    std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called." << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name + "_clap_name") {
    std::cout << "DiamondTrap " << name << " parameterized constructor called." << std::endl;
    hp = FragTrap::getHitPoints();
    energy = ScavTrap::getEnergyPoints();
    attack_d = FragTrap::getAttackDamage();
    this->name = name;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &ct) {
    std::cout << "DiamondTrap " << name << " copy assignment operator called." << std::endl;
    name = ct.getName();
    hp = ct.getHitPoints();
    energy = ct.getEnergyPoints();
    attack_d = ct.getAttackDamage();
    return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &ct) {
    std::cout << "DiamondTrap " << name << " copy constructor called." << std::endl;
    *this = ct;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name = " << name << std::endl;
    std::cout << "ClapTrap name = " << ClapTrap::getName() << std::endl;
}
   