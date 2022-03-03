/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 14:24:32 by obounri           #+#    #+#             */
/*   Updated: 2022/03/03 16:04:35 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
private:
    int                 fixed_point;
    static const int    nfb = 8;
public:
    Fixed( void );
    ~Fixed( void );
    Fixed(const Fixed &fixed);
    Fixed&  operator=(const Fixed& fixed);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};
