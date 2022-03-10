/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 00:42:58 by obounri           #+#    #+#             */
/*   Updated: 2022/03/10 02:53:22 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>


class Base
{
private:
    
public:
    Base( void );
    virtual ~Base();

};

Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif