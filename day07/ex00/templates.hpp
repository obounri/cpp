/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:45:51 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 00:32:18 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <iostream>

template <typename T>
void    swap(T &arg1, T &arg2) {
    T   tmp;

    tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template <typename T>
T   min(T arg1, T arg2) {
    if (arg2 <= arg1)
        return arg2;
    else
        return arg1;
}

template <typename T>
T   max(T arg1, T arg2) {
    if (arg2 >= arg1)
        return arg2;
    else
        return arg1;
}

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