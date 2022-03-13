/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:02:16 by obounri           #+#    #+#             */
/*   Updated: 2022/03/13 20:18:30 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

class OutOfRange: public std::exception {
private:
    const char * exception;
public:
    OutOfRange(): exception("Out of Range !") {};
   const char * what () const throw () {
      return exception;
   }
};

class MaxSizeReached: public std::exception {
private:
    const char * exception;
public:
    MaxSizeReached(): exception("Span reached maximum size ! Failed to add number(s).") {};
   const char * what () const throw () {
      return exception;
   }
};

class NoSpanCanBeFound: public std::exception {
private:
    const char * exception;
public:
    NoSpanCanBeFound(): exception("Span is empty or has only one element, no span can be found !") {};
   const char * what () const throw () {
      return exception;
   }
};

#endif