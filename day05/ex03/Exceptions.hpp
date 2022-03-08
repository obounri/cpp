/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:54:55 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 19:09:34 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class GradeTooHighException: public std::exception {
private:
    const char * exception;
public:
    GradeTooHighException(): exception("Grade Too High !") {};
   const char * what () const throw () {
      return exception;
   }
};

class GradeTooLowException: public std::exception {
private:
    const char * exception;
public:
    GradeTooLowException(): exception("Grade Too Low !") {};
   const char * what () const throw () {
      return exception;
   }
};

class FormIsNotSigned: public std::exception {
private:
    const char * exception;
public:
    FormIsNotSigned(): exception("Form Is Not Signed !") {};
   const char * what () const throw () {
      return exception;
   }
};

class GradeTooLowToExecException: public std::exception {
private:
    const char * exception;
public:
    GradeTooLowToExecException(): exception("Grade is Too Low To Exec !") {};
   const char * what () const throw () {
      return exception;
   }
};

#endif