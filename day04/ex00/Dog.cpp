/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:27:50 by obounri           #+#    #+#             */
/*   Updated: 2022/03/06 22:40:11 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog_base") {
    std::cout << "Dog default constructor called." << std::endl;
    this->setType("Dog");
}

Dog::~Dog() {
    std::cout << "Dog destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &dog) {
    std::cout << "Dog copy assignment operator called." << std::endl;
    this->setType(dog.getType());
    return *this;
}

Dog::Dog(const Dog &dog) {
    std::cout << "Dog copy constructor called." << std::endl;
    *this = dog;
}

void Dog::makeSound() const {
    std::cout << ";;Woof Woof;;" << std::endl;
}