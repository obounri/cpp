/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:13:12 by obounri           #+#    #+#             */
/*   Updated: 2022/02/28 03:40:44 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    const std::string& getType() const;
    void         setType( std::string type );
    // Weapon(/* args */);
    // ~Weapon();
};

// Weapon::Weapon(/* args */)
// {
// }

// Weapon::~Weapon()
// {
// }

#endif