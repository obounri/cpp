/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:04:54 by obounri           #+#    #+#             */
/*   Updated: 2022/03/04 20:44:49 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
    fixed_point = 0;
}

Fixed::Fixed( const int nbr ) {
    fixed_point = nbr * (1 << nfb);
}

Fixed::Fixed( const float nbr ) {
    fixed_point = roundf(nbr * (1 << nfb));
}

Fixed::~Fixed( void )
{
}

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    if (this == &fixed)
        return *this;
    fixed_point = fixed.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const {
    return fixed_point;
}
    
void    Fixed::setRawBits( int const raw ) {
    fixed_point = raw;    
}
 
float   Fixed::toFloat( void ) const {
    return ((float)fixed_point / (float)(1 << nfb));
}

int     Fixed::toInt( void ) const {
    return (fixed_point / (1 << nfb));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

bool  Fixed::operator>(const Fixed& fixed) const {
    return (fixed_point > fixed.getRawBits());
}

bool  Fixed::operator<(const Fixed& fixed) const {
    return (fixed_point < fixed.getRawBits());
}

bool  Fixed::operator>=(const Fixed& fixed) const {
    return (fixed_point >= fixed.getRawBits());
}

bool  Fixed::operator<=(const Fixed& fixed) const {
    return (fixed_point <= fixed.getRawBits());
}

bool  Fixed::operator==(const Fixed& fixed) const {
    return (fixed_point == fixed.getRawBits());
}

bool  Fixed::operator!=(const Fixed& fixed) const {
    return (fixed_point != fixed.getRawBits());
}

Fixed  Fixed::operator+(const Fixed& fixed) const {
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed  Fixed::operator-(const Fixed& fixed) const {
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed  Fixed::operator*(const Fixed& fixed) const {
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed  Fixed::operator/(const Fixed& fixed) const {
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed&   Fixed::operator++() {
    fixed_point++;
    return(*this);
}

Fixed   Fixed::operator++( int ) {
    Fixed old(*this);
    fixed_point++;
    return(old);
}

Fixed&   Fixed::operator--() {
    fixed_point--;
    return(*this);
}

Fixed   Fixed::operator--( int ) {
    Fixed old(*this);
    fixed_point--;
    return(old);
}

Fixed&    Fixed::min(Fixed& n1, Fixed& n2) {
    if (n1 < n2)
        return n1;
    return n2;
}

const Fixed&    Fixed::min(const Fixed& n1, const Fixed& n2) {
    if (n1 < n2)
        return n1;
    return n2;
}

Fixed&    Fixed::max(Fixed& n1, Fixed& n2) {
    if (n1 > n2)
        return n1;
    return n2;
}

const Fixed&    Fixed::max(const Fixed& n1, const Fixed& n2) {
    if (n1 > n2)
        return n1;
    return n2;
}