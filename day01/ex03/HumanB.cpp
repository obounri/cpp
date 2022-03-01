/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:37:14 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 17:11:54 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

    
HumanB::HumanB( std::string name ) {
    this->name = name;
    wp = NULL;
}

void    HumanB::setWeapon(Weapon &wp) {
    this->wp = &wp;
}

void    HumanB::attack() {
    std::cout << name << " attacks with their " << (*wp).getType() << std::endl;
}