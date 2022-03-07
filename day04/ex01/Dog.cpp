/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:50 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 02:55:12 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog default constructor called." << std::endl;
    this->setType("Dog");
    brain = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog destructor called." << std::endl;
    delete brain;
}

void    Dog::setBrain( Brain* brain ) {
    this->brain = brain;
}

Brain&  Dog::getBrain( void ) const {
    return *brain;
}

void    Dog::deepCopy(const Dog &dog) {
    type = dog.type;
    
    delete [] brain;
    if (dog.brain)
    {
        brain = new Brain();
        brain->setIdeas(&(dog.brain->getIdeas()));
    }
    else
        brain = nullptr;
}

Dog& Dog::operator=(const Dog &dog) {
    std::cout << "Dog copy assignment operator called." << std::endl;
    if (this != &dog)
        deepCopy(dog);
    return *this;
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog copy constructor called." << std::endl;
    deepCopy(dog);
}

void Dog::makeSound() const {
    std::cout << ";;Woof Woof;;" << std::endl;
}