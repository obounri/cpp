/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:26:51 by obounri           #+#    #+#             */
/*   Updated: 2022/03/06 22:27:38 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
public:
    Dog();
    Dog(const Dog &cat);
    Dog &operator=(const Dog &dog);
    ~Dog();

    void makeSound() const;
};

#endif