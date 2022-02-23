/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:32:51 by obounri           #+#    #+#             */
/*   Updated: 2022/02/23 16:22:03 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#include <string>
#include <iostream>

class PhoneBook
{
private:
    Contact contacts[8];
    int     index;
    int     added;
public:
    PhoneBook() {index = 0; added = 0;}
    int     get_index();
    int     get_added();
    Contact get_contact(int i) {
        return contacts[i];
    }
    void    add(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret);
    void    search();
    void    exit();
};


#endif