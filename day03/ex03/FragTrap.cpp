/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:11:28 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 22:34:55 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) {
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap( std::string name ) {
    std::cout << "FragTrap " << name << " parameterized constructor called." << std::endl;
    hp = 100;
    energy = 50;
    attack_d = 20;
    this->name = name;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &ct) {
    std::cout << "FragTrap " << name << " copy assignment operator called." << std::endl;
    name = ct.getName();
    hp = ct.getHitPoints();
    energy = ct.getEnergyPoints();
    attack_d = ct.getAttackDamage();
    return (*this);
}

FragTrap::FragTrap(const FragTrap &ct) {
    std::cout << "FragTrap " << name << " copy constructor called." << std::endl;
    *this = ct;
}

void    FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << name << " says: YO CAN I GET A HIGH 5." << std::endl;
}