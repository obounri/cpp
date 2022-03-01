/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:40:16 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 16:07:34 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug( void ) {
    std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void    Karen::info( void ) {
    std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::warning( void ) {
    std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::error( void ) {
    std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level )
{
    int i;
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    void    (Karen::*func[4]) ( void ) = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };
    
    for (i = 0; (levels[i] != level && i < 4); i++);
    if (i < 4)
        (this->*func[i])();
    else
        std::cout << "Karen went crazy! No such level." << std::endl;
}