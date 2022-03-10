/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 18:32:38 by obounri           #+#    #+#             */
/*   Updated: 2022/03/09 22:32:26 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void)
{
	return ;
}

Convert::Convert(std::string const &str) :
_string(str)
{
	return ;
}

Convert::Convert(Convert const &rhs)
{
	*this = rhs;
	return ;
}

Convert::~Convert(void)
{
	return ;
}

Convert		&Convert::operator=(Convert const &rhs)
{
	this->_string = rhs._string;
	return (*this);
}

Convert::operator char(void) const
{
	int		c = 0;

	try {
		c = std::stoi(this->_string);
	}
	catch (std::exception &e) {
		throw(_itc);
	}
	if (!std::isprint(c))
		throw (_nd);
	return (static_cast<char>(c));
}

Convert::operator int(void) const
{
	int		i = 0;

	try {
		i = std::stoi(this->_string);
	}
	catch (std::exception &e) {
		throw(_itc);
	}
	return (static_cast<int>(i));
}

Convert::operator float(void) const
{
	float	f = 0.0f;

	try {
		f = std::stof(this->_string);
	}
	catch (std::exception &e) {
		throw(_itc);
	}
	return (static_cast<float>(f));
}

Convert::operator double(void) const
{
	double		d = 0.0;

	try {
		d = std::stod(this->_string);
	}
	catch (std::exception &e) {
		throw(_itc);
	}
	return (static_cast<double>(d));
}