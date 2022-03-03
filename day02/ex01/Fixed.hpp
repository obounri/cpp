/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:02:40 by obounri           #+#    #+#             */
/*   Updated: 2022/03/03 17:23:03 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int                 fixed_point;
    static const int    nfb = 8;
public:
    Fixed( void );
    Fixed( const int nbr );
    Fixed( const float nbr );
    ~Fixed( void );
    Fixed(const Fixed &fixed);
    Fixed&  operator=(const Fixed& fixed);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const;
    int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);