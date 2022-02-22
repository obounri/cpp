/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 12:15:52 by obounri           #+#    #+#             */
/*   Updated: 2022/02/22 14:23:01 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    megaphone(char **str)
{
    int j;

    for (int i = 1; str[i]; i++)
    {
        j = 0;
        while (str[i][j])
            std::cout << (char) toupper(str[i][j++]);
    }
    std::cout << std::endl;
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        megaphone(av);
    return (0);    
}
