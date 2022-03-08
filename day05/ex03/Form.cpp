/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:59:57 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 22:19:16 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, int requiredGradeSign, int requiredGradeExec):
_name(name),
_requiredGradeSign(requiredGradeSign),
_requiredGradeExec(requiredGradeExec)
{
    std::cout << "Form default constructor called." << std::endl;
    try {
        if (this->_requiredGradeSign < 1 || this->_requiredGradeExec < 1)
            throw _gth;
        else if (this->_requiredGradeSign > 150 || this->_requiredGradeExec > 150)
            throw _gtl;
        this->_isSigned = false;
    }
    catch(const GradeTooHighException& e) {
        std::cerr << e.what() << std::endl;
    }
    catch(const GradeTooLowException& e) {
        std::cerr << e.what() << std::endl;
    }
}

Form::~Form() {
    std::cout << "Form destructor called." << std::endl;
}

Form& Form::operator=(const Form &form)
{
    if (this == &form)
        return *this;
    std::cout << "const attributes can't be assigned to with copy assignment operator: assignment failed." << std::endl;
    return *this;
}

Form::Form(const Form &form):
_name(form._name),
_requiredGradeSign(form._requiredGradeSign),
_requiredGradeExec(form._requiredGradeExec)
{
    std::cout << "Form copy constructor called." << std::endl;
    this->_isSigned = form._isSigned;
}

std::string     Form::getName( void ) const {
    return this->_name;
}

bool            Form::getIsSigned( void ) const {
    return this->_isSigned;
}

int     Form::getRG_Sign( void ) const {
    return this->_requiredGradeSign;
}

int     Form::getRG_Exec( void ) const {
    return this->_requiredGradeExec;
}

std::ostream &operator<<(std::ostream &out, const Form &form) {
    out << "Form [" << form.getName() << "]: ";
    if (form.getIsSigned())
        out << "is signed, ";
    else
        out << "is not signed, ";
    out << "required grade to sign it is " << form.getRG_Sign() << " and required grade to execute it is " << form.getRG_Exec() << "." << std::endl;
    return out;
}

void     Form::beSigned( const Bureaucrat &bureaucrat ) {
    if (this->getIsSigned() == true) {
        std::cout << "Form " << this->getName() << " is already signed." << std::endl;
        return ;
    }
    try {
        if (bureaucrat.getGrade() > this->getRG_Sign())
            throw _gtl;
        this->_isSigned = true;
    }
    catch(const GradeTooLowException& e) {
        std::cerr << e.what() << '\n';
    }
    bureaucrat.signForm(bureaucrat.getName(), this->getName(), this->_isSigned);
}

bool            Form::canExec( const Bureaucrat &bureaucrat ) const {
    try {
        if (this->getIsSigned() == false)
            throw _fns;
        else if (bureaucrat.getGrade() > this->getRG_Exec())
            throw _gtle;
        return true;
    }
    catch(const GradeTooLowException& e) {
        std::cerr << e.what() << '\n';
    }
    catch(const FormIsNotSigned& e) {
        std::cerr << e.what() << '\n';
    }
    catch(const GradeTooLowToExecException& e) {
        std::cerr << e.what() << '\n';
    }
    return false;
}

void    Form::setIsSigned( bool isSigned ) {
    this->_isSigned = isSigned;
}