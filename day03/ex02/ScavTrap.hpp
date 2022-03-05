/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:17:42 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 21:36:14 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
public:
    ScavTrap();
    ScavTrap( std::string name );
    ~ScavTrap();
    ScavTrap(const ScavTrap &ct);

	ScavTrap &operator=(const ScavTrap &ct);
    void    guardGate();
    void    attack( const std::string& target );
};

#endif