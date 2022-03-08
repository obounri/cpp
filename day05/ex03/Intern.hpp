/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 21:03:20 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 21:29:32 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
#define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <string>

class Intern
{
public:
    Intern( void );
    Intern(const Intern &ct);
	Intern &operator=(const Intern &Intern);
    ~Intern();

    Form*   makeShrubberyCreation( std::string target );
    Form*   makeRobotomyRequest( std::string target );
    Form*   makePresidentialPardon( std::string target );

    Form*   makeForm( std::string name, std::string target);

};

#endif