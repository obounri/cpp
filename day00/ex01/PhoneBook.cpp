/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:48:42 by obounri           #+#    #+#             */
/*   Updated: 2022/02/26 00:01:45 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    index = 0;
    added = 0;
}

Contact PhoneBook::get_contact(int i) {
        return contacts[i];
}

int PhoneBook::get_index() {
    if (index == 8)
        index = 0;
    return index; 
}

int PhoneBook::get_added() {
    return added;
}

void PhoneBook::add(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret) {
    int i = get_index();
    contacts[i].new_contact(fname, lname, nname, pnumber, secret);
    index += 1;
    added += 1;
}