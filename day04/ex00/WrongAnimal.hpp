#ifndef WANIMAL_H
#define WANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal( void );
    // WrongAnimal(const WrongAnimal &ct);
	// WrongAnimal &operator=(const WrongAnimal &animal);
    ~WrongAnimal();
    // virtual ~WrongAnimal();

    // void         setType( std::string type );
    // std::string  getType( void ) const ;

    void makeSound() const;
    // virtual void makeSound() const;
};

WrongAnimal::WrongAnimal(/* args */)
{
}

WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound() const {
    std::cout << "Wrong Animal Sound." << std::endl;
}

class WrongCat: public WrongAnimal
{
public:
    WrongCat(/* args */);
    // WrongCat(const WrongCat &ct);
	// WrongCat &operator=(const WrongCat &animal);
    ~WrongCat();

    void makeSound() const;

};

WrongCat::WrongCat(/* args */)
{
}

WrongCat::~WrongCat()
{
}

void WrongCat::makeSound() const {
    std::cout << "Wrong Cat Sound." << std::endl;
}

#endif