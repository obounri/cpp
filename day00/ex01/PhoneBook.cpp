/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:48:42 by obounri           #+#    #+#             */
/*   Updated: 2022/02/22 21:46:39 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    
int PhoneBook::n_contacts() {
    if (ncontacts == 8)
        ncontacts = 0;
    return ncontacts; 
};

void PhoneBook::add(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret) {
    int i = n_contacts();
    std::cout << i << std::endl;
    contacts[i].new_contact(fname, lname, nname, pnumber, secret);
    ncontacts += 1;
}

int main()
{
    PhoneBook pb;
    std::string input[5];
    std::string prompt_mess[5] = { "first name", "last name",
                              "nickname", "phone number", "secret" };

    while (1)
    {
        std::cin >> input[0];
        if (input[0] == "EXIT")
            exit(0);
        else if (input[0] == "ADD")
        {
            for (int i = 0; i < 5; i++)
            {
                std::cout << "Enter " << prompt_mess[i] << " :" << std::endl;
                std::cin >> input[i];
            }
            pb.add(input[0], input[1], input[2], input[3], input[4]);
        }
        else if (input[0] == "SEARCH")
        {
            std::cout << "hhh" << std::endl;
        }
    }
    return (0);
}