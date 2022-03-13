/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 17:57:32 by obounri           #+#    #+#             */
/*   Updated: 2022/03/13 20:13:30 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "Exceptions.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
private:
    std::vector<int> nbrs;
    int maxSize;
public:
    Span( int N );
    Span(const Span& span);
    Span& operator=( const Span& span );
    int&  operator[]( unsigned index );
    ~Span();

    void    addNumber( int N );
    void    addNumbers( int N[], int len );
    std::vector<int>::size_type  size() const ;
    
    int     shortestSpan() const ;
    int     longestSpan() const ;

    MaxSizeReached  _msr;
    OutOfRange      _oor;
    NoSpanCanBeFound _nscbf;
};

std::ostream& operator<<(std::ostream& out, Span& span);

#endif