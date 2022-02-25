/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:19:13 by obounri           #+#    #+#             */
/*   Updated: 2022/02/25 23:25:09 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::new_contact(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret) {
    first_name = fname;
    last_name = lname;
    nickname = nname;
    phone_number = pnumber;
    darkest_secret = secret;
}

std::string Contact::fname() {
    return first_name;
}
std::string Contact::lname() {
    return last_name;
}
std::string Contact::nname() {
    return nickname;
}
std::string Contact::pnumber() {
    return phone_number;
}
std::string Contact::secret() {
    return darkest_secret;
}