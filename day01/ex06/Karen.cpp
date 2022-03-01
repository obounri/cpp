/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:40:16 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 16:51:30 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug( void ) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void    Karen::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Karen::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Karen::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Karen::complain( std::string level )
{
    int i;
    std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (i = 0; (levels[i] != level && i < 4); i++);
    switch (i)
    {
        case 0:
        {
            std::cout << "[ DEBUG ]" << std::endl;
            debug();
            std::cout << std::endl;
            i++;
        }
        case 1:
        {
            std::cout << "[ INFO ]" << std::endl;
            info();
            std::cout << std::endl;
            i++;
        }
        case 2:
        {
            std::cout << "[ WARNING ]" << std::endl;
            warning();
            std::cout << std::endl;
            i++;
        }
        case 3:
        {
            std::cout << "[ ERROR ]" << std::endl;
            error();
            break ;
        }
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}