/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:17:03 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 14:35:04 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string _name;
    Weapon&      _wp;
public:
    void    attack();
    HumanA();
    HumanA( std::string name, Weapon& wp ): _name(name),_wp(wp){};
};

#endif