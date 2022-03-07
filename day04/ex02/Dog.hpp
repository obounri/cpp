/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:26:51 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 17:48:29 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
    Brain* brain;
    void    deepCopy(const Dog &dog);
public:
    Dog();
    Dog(const Dog &dog);
    Dog &operator=(const Dog &dog);
    ~Dog();

    void makeSound() const;

    void    setBrain( Brain* brain );
    Brain*  getBrain( void ) const ;
};

#endif