/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 00:43:19 by obounri           #+#    #+#             */
/*   Updated: 2022/03/10 03:23:51 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base() {
    std::cout << "Base default constructor called." << std::endl;
}

Base::~Base() {
    std::cout << "Base destructor called." << std::endl;
}

Base* generate(void) {
    std::srand((unsigned)time(NULL));
	int rand = (std::rand() % 3);

    switch (rand)
    {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
        default:
            return NULL;
    }
}

void    identify(Base* p) {
    A*  a = dynamic_cast<A*>(p);
    B*  b = dynamic_cast<B*>(p);
    C*  c = dynamic_cast<C*>(p);

    if (a != NULL)
        std::cout << "Type is of Class A" << std::endl;
    if (b != NULL)
        std::cout << "Type is of Class B" << std::endl;
    if (c != NULL)
        std::cout << "Type is of Class C" << std::endl;
}

void    identify(Base& p) {
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Type is of Class A" << std::endl;
    }
    catch(const std::bad_cast& e) {}
    try {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "Type is of Class B" << std::endl;
    }
    catch(const std::bad_cast& e) {}
    try {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "Type is of Class C" << std::endl;
    }
    catch(const std::bad_cast& e) {}
}