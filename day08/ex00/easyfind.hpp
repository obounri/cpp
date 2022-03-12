/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:02:14 by obounri           #+#    #+#             */
/*   Updated: 2022/03/12 21:30:27 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include<vector>
#include<algorithm>
#include <exception>

class NoOccurrenceFound: public std::exception {
private:
    const char * exception;
public:
    NoOccurrenceFound(): exception("No Occurrence Found !") {};
   const char * what () const throw () {
      return exception;
   }
};

NoOccurrenceFound _nof;

template <class T>
T& easyfind(std::vector<T> cont, int find )
{
    typename std::vector<T>::iterator it;

    it = std::find(cont.begin(), cont.end(), find);
    if (*it == 0)
        throw _nof;
    return *it;
}

#endif