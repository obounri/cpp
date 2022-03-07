/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:19:33 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 17:35:59 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
    Brain*  brain;
    void    deepCopy(const Cat &cat);
public:
    Cat();
    Cat(const Cat &cat);
    Cat &operator=(const Cat &cat);
    ~Cat();

    void makeSound() const;

    void    setBrain( Brain* brain );
    Brain*  getBrain( void ) const ;
};

#endif