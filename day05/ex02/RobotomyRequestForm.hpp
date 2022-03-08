/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:52:23 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 16:52:48 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include "Exceptions.hpp"

#include <iostream>
#include <string>

class RobotomyRequestForm: public Form
{
private:
    std::string       _target;

    GradeTooHighException   _gth;
    GradeTooLowException    _gtl;

public:
    RobotomyRequestForm( std::string name );
    RobotomyRequestForm(const RobotomyRequestForm &rrForm);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rrForm);
    ~RobotomyRequestForm();

    std::string getTarget() const ;
    void        setTarget( std::string target );

    void    execute( Bureaucrat const & executor ) const;
};

#endif