/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 21:00:55 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 03:11:27 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) {
    std::cout << "Parameterized constructor called" << std::endl;
    hp = 10;
    energy = 10;
    attack_d = 0;
    this->name = name;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct) {
    std::cout << "Copy assignment operator called" << std::endl;
    name = ct.getName();
    hp = ct.getHitPoints();
    energy = ct.getEnergyPoints();
    attack_d = ct.getAttackDamage();
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &ct) {
    std::cout << "Copy constructor called" << std::endl;
    *this = ct;
}



void ClapTrap::attack(const std::string& target) {
    std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "ClapTrap " << name << " loses " << amount << " hit points. " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "ClapTrap " << name << " repairs itself and gets " << amount << " hit points back." << std::endl;
}

void			ClapTrap::setName(std::string const &name)
{
	this->name = name;
	return ;
}

std::string		ClapTrap::getName(void) const
{
	return (this->name);
}

void			ClapTrap::setHitPoints(unsigned int amount)
{
	this->hp = amount;
	return ;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->hp);
}

void			ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->energy = amount;
	return ;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->energy);
}

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attack_d = amount;
	return ;
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->attack_d);
}