/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:48:42 by obounri           #+#    #+#             */
/*   Updated: 2022/02/24 00:38:00 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

    
int PhoneBook::get_index() {
    if (index == 8)
        index = 0;
    return index; 
};

int PhoneBook::get_added() {
    return added;
};

void PhoneBook::add(std::string fname, std::string lname, std::string nname, std::string pnumber, std::string secret) {
    int i = get_index();
    contacts[i].new_contact(fname, lname, nname, pnumber, secret);
    index += 1;
    added += 1;
}

void    prompt_to_add(PhoneBook *pb)
{
    std::string input[5];
    std::string prompt_mess[5] = { "first name", "last name",
                              "nickname", "phone number", "secret" };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter " << prompt_mess[i] << " :" << std::endl;
        std::cin >> input[i];
        // getline(std::cin,input[i]);
    }
    std::cout << std::endl;
    (*pb).add(input[0], input[1], input[2], input[3], input[4]);
}

std::string truncate(std::string str)
{
    std::string tr;

    tr.assign(str);
    if (tr.length() > 10)
    {
        tr.resize(9, ' ');
        tr += ".";
    }
    else
        tr.resize(10, ' ');
    return tr;
}

void    display_search(PhoneBook pb)
{
    Contact tmp;
    int iter;
    int index;
    
    if (pb.get_added() == 0)
    {
        std::cout << "Empty phonebook, no contacts found. (Enter ADD to add contact)" << std::endl;
        return ;
        
    }
    else if (pb.get_added() > 8)
        iter = 8;
    else
        iter = pb.get_index();
    std::cout << "|index     |first name|last name |nickname  |" << std::endl; 
    for (int i = 0; i < iter; i++)
    {
        tmp = pb.get_contact(i);
        std::cout << "|" << i << "         |";
        std::cout << truncate(tmp.fname()) << "|";
        std::cout << truncate(tmp.lname()) << "|";
        std::cout << truncate(tmp.nname()) << "|" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter the index of the entry to display :" << std::endl;
    std::cin >> index;
    while (index >= iter || index < 0)
    {
        std::cout << "Out of range! Choose index again :" << std::endl;
        std::cin >> index;        
    }
    tmp = pb.get_contact(index);
    std::cout << tmp.fname() << std::endl;
    std::cout << tmp.lname() << std::endl;
    std::cout << tmp.nname() << std::endl;
    std::cout << tmp.pnumber() << std::endl;
    std::cout << tmp.secret() << std::endl << std::endl;
}

int main()
{
    PhoneBook pb;
    std::string input;

    while (1)
    {
        std::cin >> input;
        if (input == "EXIT")
            exit(0);
        else if (input == "ADD")
            prompt_to_add(&pb);
        else if (input == "SEARCH")
            display_search(pb);
    }
    return (0);
}