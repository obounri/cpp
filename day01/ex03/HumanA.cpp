/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:18:31 by obounri           #+#    #+#             */
/*   Updated: 2022/02/28 03:37:06 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA( std::string name, Weapon wp ) {
//     this->name = name;
//     this->wp = wp;
// }

void    HumanA::attack() {
    std::cout << name << " attacks with their " << wp.getType() << std::endl;
}