/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:26:31 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 11:55:17 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
    {
        Bureaucrat b1("GoodBureaucrat", 2);
        Bureaucrat b2("BadBureaucrat", 148);
        std::cout << std::endl;

        // test insertion («) operator overloading;
        std::cout << b1;
        std::cout << b2 << std::endl;

        b1.incrementGrade();
        // throws exception GradeTooHigh;
        b1.incrementGrade();
        std::cout << b1 << std::endl;

        b2.decrementGrade();
        b2.decrementGrade();
        // throws exception GradeTooLow;
        b2.decrementGrade();
        std::cout << b2 << std::endl;
    }
    {
        std::cout << std::endl;
        // this throws exception;
        Bureaucrat b1("VeryGoodBureaucrat", 0);
        Bureaucrat b2("VeryBadBureaucrat", 152);
    }
    
    return 0;
}