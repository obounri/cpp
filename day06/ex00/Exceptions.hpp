/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:34:17 by obounri           #+#    #+#             */
/*   Updated: 2022/03/09 18:42:28 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <exception>

class NotDisplayable: public std::exception {
private:
    const char * exception;
public:
    NotDisplayable(): exception("Conversion to char is not displayable, non displayable characters should not be used as inputs!") {};
   const char * what () const throw () {
      return exception;
   }
};

class ImpossibleTypeConversion: public std::exception {
private:
    const char * exception;
public:
    ImpossibleTypeConversion(): exception("This type conversion is impossible !") {};
   const char * what () const throw () {
      return exception;
   }
};

// class GradeTooLowToExecException: public std::exception {
// private:
//     const char * exception;
// public:
//     GradeTooLowToExecException(): exception("Grade is Too Low To Exec !") {};
//    const char * what () const throw () {
//       return exception;
//    }
// };


#endif