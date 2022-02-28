/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:23:16 by obounri           #+#    #+#             */
/*   Updated: 2022/02/28 00:16:37 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() 
{
    Zombie *zz;
    int N = 4;

    zz = zombieHorde( N, "HARUKEN ");
    for (int i = 0; i < N; i++)
        zz[i].announce();
    delete [] zz;
    return 0;
}