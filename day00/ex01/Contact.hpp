/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:35:46 by obounri           #+#    #+#             */
/*   Updated: 2022/02/26 00:13:48 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    void    new_contact(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret);
    std::string fname();
    std::string lname();
    std::string nname();
    std::string pnumber();
    std::string secret();
};