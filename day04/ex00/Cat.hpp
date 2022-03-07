/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:19:33 by obounri           #+#    #+#             */
/*   Updated: 2022/03/06 22:43:11 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
public:
    Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat &cat);
    ~Cat();

    virtual void makeSound() const;
};

#endif