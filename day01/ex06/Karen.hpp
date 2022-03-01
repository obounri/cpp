/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 15:37:46 by obounri           #+#    #+#             */
/*   Updated: 2022/03/01 16:11:03 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    // Karen();
    // ~Karen();
    void    complain( std::string level );
};

#endif