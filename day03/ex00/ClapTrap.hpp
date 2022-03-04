/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:47:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/04 23:26:02 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         hp;
    int         energy;
    int         attack_d;
public:
    ClapTrap();
    ClapTrap( std::string name );
    ~ClapTrap();
    ClapTrap(const ClapTrap &ct);

	ClapTrap &operator=(const ClapTrap &ct);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
