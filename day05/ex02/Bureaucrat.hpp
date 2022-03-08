/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:26:41 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 12:16:27 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <string>

#include "Exceptions.hpp"

class Bureaucrat
{
private:
    const std::string       _name;
    int                     _grade;

    GradeTooHighException   _gth;
    GradeTooLowException    _gtl;
    
public:
    Bureaucrat( std::string name, int grade );
    Bureaucrat(const Bureaucrat &ct);
	Bureaucrat &operator=(const Bureaucrat &Bureaucrat);
    ~Bureaucrat();

    const std::string   getName( void ) const ;
    int                 getGrade( void ) const ;

    void                incrementGrade();
    void                decrementGrade();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif