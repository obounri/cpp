/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:04:54 by obounri           #+#    #+#             */
/*   Updated: 2022/03/03 17:23:18 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
    std::cout << "Default construtor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed( const int nbr ) {
    std::cout << "Int Construtor called" << std::endl;
    fixed_point = nbr * (1 << nfb);
}

Fixed::Fixed( const float nbr ) {
    std::cout << "Float Construtor called" << std::endl;
    fixed_point = roundf(nbr * (1 << nfb));
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy construtor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=(const Fixed& fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
        return *this;
    fixed_point = fixed.getRawBits();
    return *this;
}

int     Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_point;
}
    
void    Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
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