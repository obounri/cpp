/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:20:40 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 17:15:54 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
    this->type = type;
}


const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType( std::string type ) {
    this->type = type;
}