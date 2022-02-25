/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 23:43:10 by obounri           #+#    #+#             */
/*   Updated: 2022/02/26 00:27:34 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    prompt_to_add(PhoneBook *pb)
{
    std::string input[5];
    std::string prompt_mess[5] = { "first name", "last name",
                              "nickname", "phone number", "secret" };

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter " << prompt_mess[i] << " :" << std::endl;
        std::getline(std::cin,input[i]);
        if (std::cin.eof())
            return ;
        else if (input[i].empty())
        {
            std::cout << "Can't submit empty entry." << std::endl;
            i--;
        }
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
        tr.resize(9);
        tr += ".";
    }
    return tr;
}

void    display_search(PhoneBook pb)
{
    Contact tmp;
    int iter, index;
    std::string input;
    
    if (pb.get_added() == 0)
    {
        std::cout << "Empty phonebook, no contacts found. (Enter ADD to add contact)" << std::endl << std::endl;
        return ;
    }
    else if (pb.get_added() >= 8)
        iter = 8;
    else
        iter = pb.get_index();
    std::cout << "|     index|first name| last name|  nickname|" << std::endl; 
    for (int i = 0; i < iter; i++)
    {
        tmp = pb.get_contact(i);
        std::cout << "|         " << i << "|";
        std::cout << std::right << std::setw(10) << truncate(tmp.fname()) << "|";
        std::cout << std::right << std::setw(10) << truncate(tmp.lname()) << "|";
        std::cout << std::right << std::setw(10) << truncate(tmp.nname()) << "|" << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Enter the index of the entry to display :" << std::endl;
    std::getline(std::cin, input);
    try {
        index = std::stoi(input);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
        return ;
    }
    if (index >= iter || index < 0)
    {
        std::cout << "Out of range!" << std::endl << std::endl;
        return ;
    }
    tmp = pb.get_contact(index);
    std::cout << "First name : " << tmp.fname() << std::endl;
    std::cout << "Last name : " << tmp.lname() << std::endl;
    std::cout << "Nickname : " << tmp.nname() << std::endl;
    std::cout << "Phone number : " << tmp.pnumber() << std::endl;
    std::cout << "Darkest secret : " << tmp.secret() << std::endl << std::endl;
}

int main()
{
    PhoneBook pb;
    std::string input;

    while (!std::cin.eof())
    {
        std::cout << "ADD, SEARCH or EXIT :" << std::endl;
        std::getline(std::cin, input);
        if (input == "EXIT")
            exit(0);
        else if (input == "ADD")
            prompt_to_add(&pb);
        else if (input == "SEARCH")
            display_search(pb);
    }
    return (0);
}