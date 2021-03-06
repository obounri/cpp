/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 20:47:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 20:38:16 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    unsigned int         hp;
    unsigned int         energy;
    unsigned int         attack_d;
public:
    ClapTrap();
    ClapTrap( std::string name );
    ~ClapTrap();
    ClapTrap(const ClapTrap &ct);

	ClapTrap &operator=(const ClapTrap &ct);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void			setName(std::string const &name);
	std::string		getName(void) const;
	void			setHitPoints(unsigned int amount);
	unsigned int	getHitPoints(void) const;
	void			setEnergyPoints(unsigned int amount);
	unsigned int	getEnergyPoints(void) const;
	void			setAttackDamage(unsigned int amount);
	unsigned int	getAttackDamage(void) const;
};
