/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:11:32 by obounri           #+#    #+#             */
/*   Updated: 2022/03/05 21:27:42 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
    FragTrap();
    FragTrap( std::string name );
    ~FragTrap();
    FragTrap(const FragTrap &ct);

	FragTrap &operator=(const FragTrap &ct);
    void    highFivesGuys();
};

#endif