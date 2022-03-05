/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:25:19 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 20:48:50 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap( std::string name ) {
    std::cout << "ScavTrap " << name << " parameterized constructor called." << std::endl;
    hp = 100;
    energy = 50;
    attack_d = 20;
    this->name = name;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " destructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ct) {
    std::cout << "ScavTrap " << name << " copy assignment operator called." << std::endl;
    name = ct.getName();
    hp = ct.getHitPoints();
    energy = ct.getEnergyPoints();
    attack_d = ct.getAttackDamage();
    return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &ct) {
    std::cout << "ScavTrap " << name << " copy constructor called." << std::endl;
    *this = ct;
}

void    ScavTrap::attack( const std::string& target ) {
    std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << this->getAttackDamage() \
    << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}
