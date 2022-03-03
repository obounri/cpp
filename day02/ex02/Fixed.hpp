/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:02:40 by obounri           #+#    #+#             */
/*   Updated: 2022/03/03 21:05:43 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixed_point;
	static const int	nfb = 8;

public:
	Fixed(void);
	Fixed(const int nbr);
	Fixed(const float nbr);
	~Fixed(void);
	Fixed(const Fixed &fixed);

	Fixed &operator=(const Fixed &fixed);

	bool operator>(const Fixed &fixed) const ;
	bool operator<(const Fixed &fixed) const ;
	bool operator>=(const Fixed &fixed) const ;
	bool operator<=(const Fixed &fixed) const ;
	bool operator==(const Fixed &fixed) const ;
	bool operator!=(const Fixed &fixed) const ;

	Fixed operator+(const Fixed &fixed) const ;
	Fixed operator-(const Fixed &fixed) const ;
	Fixed operator*(const Fixed &fixed) const ;
	Fixed operator/(const Fixed &fixed) const ;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed& n1, Fixed& n2);
	static Fixed &min(const Fixed& n1, const Fixed& n2);
	static Fixed &max(Fixed& n1, Fixed& n2);
	static Fixed &max(const Fixed& n1, const Fixed& n2);
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);