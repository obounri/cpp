/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:26:31 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 22:26:09 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
    Bureaucrat b1("GoodBureaucrat", 2);
    Bureaucrat b2("BadBureaucrat", 20);
    // Bureaucrat b3("ff", 151);

    PresidentialPardonForm form1("f1");
    ShrubberyCreationForm form2("f2");
    RobotomyRequestForm form3("f3");

    std::cout << std::endl;
    
    form3.beSigned(b1);
    form3.execute(b1);
    std::cout << std::endl;

    form2.beSigned(b2);
    form2.execute(b2);
    std::cout << std::endl;

    form1.beSigned(b2);
    b2.executeForm(form1);
    std::cout << std::endl;
    
    return 0;
}