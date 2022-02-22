/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:32:51 by obounri           #+#    #+#             */
/*   Updated: 2022/02/22 21:09:36 by obounri          ###   ########.fr       */
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
    int     ncontacts;
public:
    void add(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret);
    void search();
    void exit();
    int n_contacts();
    PhoneBook() {ncontacts = 0;}
};


#endif