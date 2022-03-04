/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:00:55 by obounri           #+#    #+#             */
/*   Updated: 2022/03/04 23:50:01 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
// # include <pthread.h>

ClapTrap::ClapTrap( void ) {
    std::cout << "Default constructor called" << std::endl;
    hp = 10;
    energy = 10;
    attack_d = 0;
}

ClapTrap::ClapTrap( std::string name ) {
    std::cout << "Parameterized constructor called" << std::endl;
    this->name = name;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct) {
    std::cout << "Copy assignment operator called" << std::endl;
    name = ct.name;
    hp = ct.hp;
    energy = ct.energy;
    attack_d = ct.attack_d;
}



void ClapTrap::attack(const std::string& target) {
        
}

// void takeDamage(unsigned int amount);
// void beRepaired(unsigned int amount);
