/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:29:46 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 18:36:14 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal( void );
    Animal( std::string _type );
    Animal(const Animal &ct);
	Animal &operator=(const Animal &animal);
    virtual ~Animal();

    void         setType( std::string type );
    std::string  getType( void ) const ;

    virtual void makeSound() const = 0;
};

#endif
