/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:38:53 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 17:40:28 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_HPP
#define INTEGER_HPP

#include <iostream>

class Integer
{
private:
    int _n;
public:
    Integer();
    Integer(int n): _n(n) {};
    ~Integer();

    int         getn() const { return _n; } ;
    Integer& operator=(const Integer& n);
    bool    operator>=(const Integer& n) ;
    bool    operator<=(const Integer& n);
};

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

bool Integer::operator>=(const Integer &n) {
    // std::cout << "Comparaison operator (>) called." << std::endl;
    if (this->_n >= n._n)
        return true;
    else
        return false;
}

bool Integer::operator<=(const Integer &n) {
    // std::cout << "Comparaison operator (<) called." << std::endl;
    if (this->_n <= n._n)
        return true;
    else
        return false;
}

#endif