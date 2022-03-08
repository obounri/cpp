/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 14:04:05 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 16:49:14 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include "Exceptions.hpp"

#include <iostream>
#include <string>

class ShrubberyCreationForm: public Form
{
private:
    std::string       _target;

    GradeTooHighException   _gth;
    GradeTooLowException    _gtl;

public:
    ShrubberyCreationForm( std::string name );
    ShrubberyCreationForm(const ShrubberyCreationForm &scForm);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &scForm);
    ~ShrubberyCreationForm();

    std::string getTarget() const ;
    void        setTarget( std::string target );

    void    execute( Bureaucrat const & executor ) const;
};

#endif