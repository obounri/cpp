/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:38:53 by obounri           #+#    #+#             */
/*   Updated: 2022/03/12 21:31:18 by obounri          ###   ########.fr       */
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
    bool    operator==(const Integer &n);
    Integer& operator*(const Integer& n);
    bool    operator>=(const Integer& n) ;
    bool    operator<=(const Integer& n);
};

std::ostream& operator<<(std::ostream& out, const Integer& n);

#endif