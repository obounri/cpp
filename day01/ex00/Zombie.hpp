/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 15:20:44 by obounri           #+#    #+#             */
/*   Updated: 2022/02/26 23:33:31 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    ~Zombie();
    void announce( void );
    void set_name( std::string name );
};

void       randomChump( std::string name );
Zombie* newZombie( std::string name );


