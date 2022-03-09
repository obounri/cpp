/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:29:17 by obounri           #+#    #+#             */
/*   Updated: 2022/03/09 20:02:15 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include "Exceptions.hpp"

#include <iostream>
// #include <iomanip>
#include <string>

class Convert
{
private:
	std::string		            _string;

    ImpossibleTypeConversion    _itc;
    NotDisplayable              _nd;

public:
	Convert(void);
	Convert(std::string const &str);
	Convert(Convert const &rhs);
	~Convert(void);

	Convert		&operator=(Convert const &rhs);
	operator char(void) const;
	operator int(void) const;
	operator float(void) const;
	operator double(void) const;
};

#endif