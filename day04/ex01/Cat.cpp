/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:26:19 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 02:28:35 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    this->setType("Cat");
    brain = new Brain();
}

Cat::~Cat() {
    std::cout << "Cat destructor called." << std::endl;
    delete brain;
}

void    Cat::setBrain( Brain* brain ) {
    this->brain = brain;
}

Brain&  Cat::getBrain( void ) const {
    return *brain;
}

void    Cat::deepCopy(const Cat &cat) {
    type = cat.type;
    
    delete [] brain;
    if (cat.brain)
    {
        brain = new Brain();
        brain->setIdeas(&(cat.brain->getIdeas()));
    }
    else
        brain = nullptr;
}

Cat& Cat::operator=(const Cat &cat) {
    std::cout << "Cat copy assignment operator called." << std::endl;
    if (this != &cat)
        deepCopy(cat);
    return *this;
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat copy constructor called." << std::endl;
    deepCopy(cat);
}

void Cat::makeSound() const {
    std::cout << ";;Meooow;;" << std::endl;
}
