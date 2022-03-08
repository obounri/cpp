/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:54:55 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 10:55:30 by obounri          ###   ########.fr       */
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

#endif