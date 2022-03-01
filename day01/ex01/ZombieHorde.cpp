/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 23:21:35 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 17:34:42 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie* zz;
    
    zz = new Zombie [N];
    for (int i = 0; i < N; i++)
        zz[i].set_name(name);
    return zz;
}