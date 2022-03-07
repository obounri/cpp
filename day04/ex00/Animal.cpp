/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:30:01 by obounri           #+#    #+#             */
/*   Updated: 2022/03/06 22:44:58 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal( std::string _type ):
type(_type)
{
    std::cout << "Animal parameterized constructor called." << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called." << std::endl;
}

void         Animal::setType( std::string type ) {
    this->type = type;
}

std::string  Animal::getType( void ) const
{
    return this->type;  
}

Animal& Animal::operator=(const Animal &animal) {
    std::cout << "Animal copy assignment operator called." << std::endl;
    this->setType(animal.getType());
    return *this;
}

Animal::Animal(const Animal &animal) {
    std::cout << "Animal copy constructor called." << std::endl;
    *this = animal;
}

void Animal::makeSound() const {
    std::cout << ";;All the jungle animals cheer;;" << std::endl;
}
