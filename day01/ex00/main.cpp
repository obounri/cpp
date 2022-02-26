/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:23:16 by obounri           #+#    #+#             */
/*   Updated: 2022/02/26 23:38:27 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    Zombie *zz, *za;

    zz = newZombie( "HULAKO" );
    za = newZombie( "KRUDOLF" );
    zz->announce();
    za->announce();
    randomChump( "ASTROFI" );

    delete zz;
    return 0;
}