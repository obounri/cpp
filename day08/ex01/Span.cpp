/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:17:12 by obounri           #+#    #+#             */
/*   Updated: 2022/03/13 20:16:10 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( int N ):
maxSize(N)
{    
}

Span::~Span()
{
}

Span::Span(const Span& span) {
    *this = span;
}

Span&   Span::operator=(const Span& span) {
    this->maxSize = span.maxSize;
    this->nbrs = span.nbrs;
    return *this;
}

int&  Span::operator[]( unsigned index ) {
    if (index >= this->nbrs.size())
        throw _oor;
    return this->nbrs[index];
}

std::vector<int>::size_type  Span::size() const {
    return this->nbrs.size();
}


std::ostream& operator<<(std::ostream& out, Span& span) {
    std::vector<int>::size_type sz = span.size();

    for (unsigned i = 0; i < sz; i++)
    {
        out << span[i] << std::endl;
    }
    out << std::endl;
    return out;
}

void    Span::addNumber( int N ) {
    try {
    if (this->nbrs.size() == (std::vector<int>::size_type)this->maxSize)
        throw _msr;
    }
    catch(const std::exception& e)  {
        std::cerr << e.what() << '\n';
        return ;
    }
    this->nbrs.push_back(N);
}

int		Span::shortestSpan(void) const
{
	if (this->size() == 0 || this->size() == 1)
		throw _nscbf;
	int		short_dist;
	for (int i = 0; i < (int)(this->size() - 1); i++)
	{
		int		current = std::abs(this->nbrs[i] - this->nbrs[i + 1]);
		if (current < short_dist)
			short_dist = current;
	}
	return (short_dist);
}

int     Span::longestSpan() const {
    if (this->size() == 0 || this->size() == 1)
		throw _nscbf;
    return (std::abs(*std::max_element(this->nbrs.begin(), this->nbrs.end()) - *std::min_element(this->nbrs.begin(), this->nbrs.end())));
}

void    Span::addNumbers( int N[], int len ) {
    try {
        if (this->nbrs.size() == (std::vector<int>::size_type)this->maxSize)
            throw _msr;
    }
    catch(const std::exception& e)  {
        std::cerr << e.what() << '\n';
        return ;
    }
    for (int i = 0; (i < len && this->nbrs.size() <= (std::vector<int>::size_type)this->maxSize); i++) {
        this->nbrs.push_back(N[i]);
    }
}