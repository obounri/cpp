/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:26:31 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 22:13:09 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
    {
        Bureaucrat b1("GoodBureaucrat", 2);
        Bureaucrat b2("BadBureaucrat", 21);
        Form       form("VacationForm", 20, 20);
        Form       form1("RaiseForm", 20, 20);
        std::cout << std::endl;

        // test insertion («) operator overloading;
        std::cout << b1;
        std::cout << b2;
        std::cout << form;
        std::cout << form1 << std::endl;
    
        form.beSigned(b1);
        std::cout << form;
        std::cout << std::endl;
        // throws exception GradeTooLow;
        form1.beSigned(b2);
        std::cout << form1;
        std::cout << std::endl;

        // Increment BadBureaucrat's grade so he can sign the form;
        b2.incrementGrade();
        form1.beSigned(b2);
        std::cout << form1;
        std::cout << std::endl;
    }
    {
        std::cout << std::endl;
        // this throws exception;
        Bureaucrat b1("VeryGoodBureaucrat", 0);
        Bureaucrat b2("VeryBadBureaucrat", 152);
    }
    
    return 0;
}