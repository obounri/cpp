/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:36:10 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 14:47:55 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon*      wp;
public:
    void    attack();
    void    setWeapon(Weapon& wp);
    HumanB();
    HumanB( std::string name );
};

#endif