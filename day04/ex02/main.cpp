/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:25:06 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 18:55:09 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    Animal *animals[6];
    // Animal test; // Error here because class is abstarct

    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();
    for (int i = 3; i < 6; i++)
        animals[i] = new Cat();

    std::cout << std::endl;
    for (int i = 0; i < 6; i++)
        animals[i]->makeSound();
    std::cout << std::endl;  
    
    for (int i = 0; i < 6; i++)
        delete animals[i];

    return 0;
}