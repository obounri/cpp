/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:20:44 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 17:40:33 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    ~Zombie();
    void announce( void );
    void set_name( std::string name );
};

Zombie* zombieHorde( int N, std::string name );


