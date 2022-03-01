/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:30:23 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 15:33:48 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MySed.hpp"

void	sed(std::string a1, std::string s1, std::string s2)
{
	std::ifstream infile(a1.c_str(), std::ios::in);

	if (!infile)
	{
		std::cerr << "Can't open " << a1 << " for Reading" << std::endl;
		return ;
	}
	std::string fileReplace = a1 + ".replace";
	std::ofstream outfile(fileReplace.c_str(), std::ios::out);
	if (!outfile)
	{
		std::cerr << "Can't open " << fileReplace << " for Writing" << std::endl;
		return ;
	}
	std::string reading;
	size_t pos;
	std::string tmp;
	std::string tmp1;
	std::getline(infile,reading, '\0');
	pos = reading.find(s1,0);
	while (pos != std::string::npos)
	{
		tmp = reading.substr(0,pos);
		tmp1 = reading.substr(pos + s1.length(),reading.length());
		reading = tmp + s2 + tmp1;
		pos = reading.find(s1,pos + 1);
	}
	outfile << reading;
	infile.close();
	outfile.close();
}