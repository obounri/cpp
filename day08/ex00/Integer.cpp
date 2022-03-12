/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:52:20 by obounri           #+#    #+#             */
/*   Updated: 2022/03/12 21:31:27 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer()
{
    // std::cout << "Constructor called." <<
}

Integer::~Integer()
{
}

std::ostream& operator<<(std::ostream& out, const Integer& n) {
    out << n.getn();
    return out;
}

Integer& Integer::operator=(const Integer& n) {
    // std::cout << "Assignment operator (=) called." <<
    if (this == &n)
        return *this;
    this->_n = n._n;
    return *this;
}

Integer& Integer::operator*(const Integer& n) {
    // std::cout << "Assignment operator (=) called." <<
    this->_n *= n._n;
    return *this;
}

bool Integer::operator>=(const Integer &n) {
    // std::cout << "Comparaison operator (>=) called." << std::endl;
    if (this->_n >= n._n)
        return true;
    else
        return false;
}

bool Integer::operator<=(const Integer &n) {
    // std::cout << "Comparaison operator (<=) called." << std::endl;
    if (this->_n <= n._n)
        return true;
    else
        return false;
}

bool Integer::operator==(const Integer &n) {
    // std::cout << "Comparaison operator (>=) called." << std::endl;
    if (this->_n == n._n)
        return true;
    else
        return false;
}