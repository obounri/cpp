/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:25:06 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 03:30:04 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"

int main()
{
    Animal *animals[6];
    
    for (int i = 0; i < 3; i++)
        animals[i] = new Dog();
    for (int i = 3; i < 3; i++)
        animals[i] = new Cat();

    std::cout << std::endl;

    for (int i = 0; i < 6; i++)
        delete animals[i];
    Dog basic;
    std::string *ideas = new std::string[100];
    ideas[0] = "test1";
    Brain *brain = new Brain();
    brain->setIdeas(ideas);
    basic.setBrain(brain);
    {
        Dog tmp = basic;
        ideas[0] = "hhhh";
        brain->setIdeas(ideas);
        basic.setBrain(brain);
        // test
    }
    // {
    //     // To show shallow copy vs deep copy
    //     // Try same with Dog class   
    //     Brain *brain = new Brain();
    //     WrongDog* d1 = new WrongDog();
    //     std::string *ideas = new std::string[100];
    //     ideas[0] = "test1";
    //     brain->setIdeas(ideas);
    //     d1->setBrain(brain);
        
    //     WrongDog* d2 = new WrongDog(*d1);
        

    //     std::cout << "constructors done" << std::endl << std::endl;

    //     ideas[0] = "hhhhh";
    //     brain->setIdeas(ideas);
    //     d1->setBrain(brain);
    //     std::cout << "d1 idea = " << ((d1->getBrain()).getIdeas()) << std::endl;
    //     std::cout << "d2 idea = " << ((d2->getBrain()).getIdeas()) << std::endl;
    // }

    return 0;
}