/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:40:09 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 17:56:07 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
    ideas = new std::string[100];
}

Brain::~Brain() {
    std::cout << "Brain destructor called." << std::endl;
    delete [] ideas;
}

void            Brain::setIdeas( std::string* ideas ) {
    delete [] this->ideas;
    if (ideas)
    {
        this->ideas = new std::string[100];
        for (int i = 0; i < 100; i++)
            this->ideas[i] = ideas[i];
    }
    else
        ideas = NULL;
}

std::string*    Brain::getIdeas() const {
    return ideas;
}

Brain& Brain::operator=(const Brain &brain) {
    std::cout << "Brain copy assignment operator called." << std::endl;
    if (this != &brain)
        deepCopy(brain);
    return *this;
}

void    Brain::deepCopy(const Brain &brain) {
    delete [] ideas;
    if (brain.ideas)
    {
        ideas = new std::string[100];
        for (int i = 0; i < 100; i++)
            this->ideas[i] = ideas[i];
    }
    else
        ideas = NULL;
}

Brain::Brain(const Brain &brain) {
    std::cout << "Brain copy constructor called." << std::endl;
    ideas = new std::string[100];
    deepCopy(brain);
}