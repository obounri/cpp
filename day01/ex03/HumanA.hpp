/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:17:03 by obounri           #+#    #+#             */
/*   Updated: 2022/02/28 03:41:17 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon&      wp;
public:
    void    attack();
    HumanA( std::string name, Weapon wp );
    ~HumanA();
};

#endif