/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:41:26 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 22:45:37 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap( std::string name );
    DiamondTrap(const DiamondTrap &ct);
    ~DiamondTrap();

	DiamondTrap &operator=(const DiamondTrap &ct);
    
    void whoAmI();
    
    using ScavTrap::attack;
};

#endif