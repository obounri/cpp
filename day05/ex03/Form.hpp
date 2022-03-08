/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:00:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 22:18:53 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Exceptions.hpp"
#include "Bureaucrat.hpp"

#include <fstream>
#include <iostream>
#include <string>

class Bureaucrat;

class Form
{
private:
    const std::string       _name;
    bool                    _isSigned;
    const int               _requiredGradeSign;
    const int               _requiredGradeExec;

    GradeTooHighException       _gth;
    GradeTooLowException        _gtl;
    FormIsNotSigned             _fns;
    GradeTooLowToExecException  _gtle;

public:
    Form( std::string name, int requiredGradeSign, int requiredGradeExec );
    Form( const Form &ct );
	Form &operator=( const Form &Form );
    virtual ~Form();

    std::string     getName( void ) const ;
    bool            getIsSigned( void ) const ;
    int             getRG_Sign( void ) const ;
    int             getRG_Exec( void ) const ;

    void            setIsSigned( bool isSigned );

    void            beSigned( const Bureaucrat &bureaucrat );

    bool            canExec( const Bureaucrat &bureaucrat ) const ;

    virtual bool    execute( Bureaucrat const & executor ) const = 0;
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif