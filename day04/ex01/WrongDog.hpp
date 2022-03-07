#ifndef WRONGDOD_H
#define WRONGDOD_H

#include "Animal.hpp"
#include "Brain.hpp"

// To show shallow copy  

class WrongDog: public Animal
{
private:
    Brain* brain;
public:
    WrongDog();
    WrongDog(const WrongDog &wd);
    WrongDog &operator=(const WrongDog &wd);
    ~WrongDog();

    void makeSound() const;

    void    setBrain( Brain* brain );
    Brain&  getBrain( void ) const ;
};

WrongDog::WrongDog(): Animal("WrongDog_base") {
    std::cout << "WrongDog default constructor called." << std::endl;
    this->setType("WrongDog");
    brain = new Brain();
}

WrongDog::~WrongDog() {
    std::cout << "WrongDog destructor called." << std::endl;
    delete brain;
}

void    WrongDog::setBrain( Brain* brain ) {
    this->brain = brain;
}

Brain&  WrongDog::getBrain( void ) const {
    return *brain;
}

WrongDog& WrongDog::operator=(const WrongDog &wd) {
    std::cout << "WrongDog copy assignment operator called." << std::endl;
    this->setType(wd.getType());
    this->brain = wd.brain;
    return *this;
}

WrongDog::WrongDog(const WrongDog &wd) {
    std::cout << "WrongDog copy constructor called." << std::endl;
    *this = wd;
}

void WrongDog::makeSound() const {
    std::cout << ";;Woof Woof;;" << std::endl;
}

#endif
