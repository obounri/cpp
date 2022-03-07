/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:26:19 by obounri           #+#    #+#             */
/*   Updated: 2022/03/06 23:02:41 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat default constructor called." << std::endl;
    this->setType("Cat");
}

Cat::~Cat() {
    std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &cat) {
    std::cout << "Cat copy assignment operator called." << std::endl;
    this->setType(cat.getType());
    return *this;
}

Cat::Cat(const Cat &cat) {
    std::cout << "Cat copy constructor called." << std::endl;
    *this = cat;
}

void Cat::makeSound() const {
    std::cout << ";;Meooow;;" << std::endl;
}
