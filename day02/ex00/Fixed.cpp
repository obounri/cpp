/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:26:52 by obounri           #+#    #+#             */
/*   Updated: 2022/03/03 16:04:50 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) {
    std::cout << "Default construtor called" << std::endl;
    fixed_point = 0;
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
    
    