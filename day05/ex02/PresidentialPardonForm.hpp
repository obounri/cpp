/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:51:24 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 16:51:57 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"
#include "Exceptions.hpp"

#include <iostream>
#include <string>

class PresidentialPardonForm: public Form
{
private:
    std::string       _target;

    GradeTooHighException   _gth;
    GradeTooLowException    _gtl;

public:
    PresidentialPardonForm( std::string name );
    PresidentialPardonForm(const PresidentialPardonForm &ppForm);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &ppForm);
    ~PresidentialPardonForm();

    std::string getTarget() const ;
    void        setTarget( std::string target );

    void    execute( Bureaucrat const & executor ) const;
};

#endif