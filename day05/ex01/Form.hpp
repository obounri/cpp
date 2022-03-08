/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:00:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 16:26:02 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Exceptions.hpp"
#include "Bureaucrat.hpp"

#include <iostream>
#include <string>

class Form
{
private:
    const std::string       _name;
    bool                    _isSigned;
    const int               _requiredGradeSign;
    const int               _requiredGradeExec;

    GradeTooHighException   _gth;
    GradeTooLowException    _gtl;

public:
    Form( std::string name, int requiredGradeSign, int requiredGradeExec );
    Form( const Form &ct );
	Form &operator=( const Form &Form );
    ~Form();

    std::string     getName( void ) const ;
    bool            getIsSigned( void ) const ;
    int             getRG_Sign( void ) const ;
    int             getRG_Exec( void ) const ;

    void            beSigned( Bureaucrat const & executor );
    void            signForm( std::string name, std::string form, bool isSigned ) const ;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif