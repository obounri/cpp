/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:27:04 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 11:54:06 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ):
_name(name)
{
    std::cout << "Bureaucrat parameterized constructor called." << std::endl;
    try {
        if (grade < 1)
            throw _gth;
        else if (grade > 150)
            throw _gtl;
        this->_grade = grade;
    }
    catch(const GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch(const GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat() {
    std::cout << _name << " destructor called." << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    // std::cout << "Bureaucrat copy assignment operator called." << std::endl;
    if (this == &bureaucrat)
        return *this;
    // *this = bureaucrat;
    std::cout << "const name can't be assigned to with copy assignment operator: assignment failed." << std::endl;
    return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat):
_name(bureaucrat.getName()),
_grade(bureaucrat.getGrade()) 
{
    std::cout << "Bureaucrat copy constructor called." << std::endl;
}

const std::string Bureaucrat::getName( void ) const {
    return this->_name;
}

int Bureaucrat::getGrade( void ) const {
    return this->_grade;
}

void        Bureaucrat::incrementGrade() {
    try {
        if (this->_grade == 1)
            throw _gth;
        this->_grade -= 1;
        std::cout << this->getName() << ": you've been good -> grade incremented." << std::endl;
    }
    catch(const GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    }
}

void        Bureaucrat::decrementGrade() {
    try {
        if (this->_grade == 150)
            throw _gtl;
        this->_grade += 1;
        std::cout << this->getName() << ": you've been naughty -> grade decremented." << std::endl;
    }
    catch(const GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}