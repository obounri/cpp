/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:26:02 by obounri           #+#    #+#             */
/*   Updated: 2022/03/07 02:24:05 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
private:
    std::string *ideas;
    void deepCopy(const Brain &brain);
public:
    Brain();
    Brain(const Brain& brain);
    Brain& operator=(const Brain& brain);
    ~Brain();

    void            setIdeas( std::string* ideas );
    std::string&    getIdeas() const ;
};


#endif