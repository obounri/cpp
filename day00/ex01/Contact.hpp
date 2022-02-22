/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:35:46 by obounri           #+#    #+#             */
/*   Updated: 2022/02/22 21:02:08 by obounri          ###   ########.fr       */
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
    void    new_contact(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret) {
        first_name = fname;
        last_name = lname;
        nickname = nname;
        phone_number = pnumber;
        darkest_secret = secret;
    }
    // void setfname(std::string fname) {
    //     first_name = fname;
    // }
    // void setlname(std::string lname) {
    //     last_name = lname;
    // }
    // void setnname(std::string nname) {
    //     nickname = nname;
    // }
    // void setpnumber(std::string pnumber) {
    //     phone_number = pnumber;
    // }
    // void setsecret(std::string secret) {
    //     darkest_secret = secret;
    // }
    std::string fname() {
        return first_name;
    }
    std::string lname() {
        return last_name;
    }
    std::string nname() {
        return nickname;
    }
    std::string pnumber() {
        return phone_number;
    }
    std::string secret() {
        return darkest_secret;
    }
};