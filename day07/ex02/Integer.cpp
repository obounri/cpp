/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:58:56 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 23:59:01 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.hpp"

Integer::Integer()
{
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