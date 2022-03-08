/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 21:02:21 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 21:46:06 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor called." << std::endl;
}

Intern::~Intern() {
    std::cout << "Intern destructor called." << std::endl;
}

Intern& Intern::operator=(const Intern &intern) {
    std::cout << "Intern copy assignment operator called." << std::endl;
    (void)intern;
    return *this;
}

Intern::Intern(const Intern &intern) {
    std::cout << "Intern copy constructor called." << std::endl;
    *this = intern;
}

Form*   Intern::makeShrubberyCreation( std::string target ) {
    Form *form = new ShrubberyCreationForm(target);
    return form;
}

Form*   Intern::makeRobotomyRequest( std::string target ) {
    Form *form = new RobotomyRequestForm(target);
    return form;
}

Form*   Intern::makePresidentialPardon( std::string target ) {
    Form *form = new PresidentialPardonForm(target);
    return form;
}

Form*   Intern::makeForm( std::string name, std::string target) {
    Form* form;

    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form*    (Intern::*fcts[3]) ( std::string target ) = { &Intern::makeShrubberyCreation, &Intern::makeRobotomyRequest, &Intern::makePresidentialPardon };
    int i;

    for (i = 0; (i < 3 && forms[i] != name); i++) ;
    if (i == 3) {
        std::cout << "Name passed for form doesn't exist" << std::endl;
        return NULL;
    }
    form = (this->*fcts[i])(target);
    std::cout << "Intern creates " << form->getName() << std::endl;
    return form;
}
