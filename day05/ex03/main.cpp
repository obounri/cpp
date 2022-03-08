/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:26:31 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 21:59:46 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() 
{
    Bureaucrat b1("FirtBureaucrat", 2);
    Bureaucrat b2("SecondBureaucrat", 50);
    Bureaucrat b3("ThirdBureaucrat", 147);

    Intern slave;
    std::cout << std::endl;

    Form *form1 = slave.makeForm("shrubbery creation", "f1");
    Form *form2 = slave.makeForm("robotomy request", "f2");
    Form *form3 = slave.makeForm("presidential pardon", "f3");
    // Form *form4 = slave.makeForm("unknown form", "f4");
    std::cout << std::endl;
     
    form1->beSigned(b1);
    b1.executeForm(*form1);
    std::cout << std::endl;
    
    form2->beSigned(b2);
    b2.executeForm(*form2);
    std::cout << std::endl;

    form3->beSigned(b3);
    form3->execute(b3);
    std::cout << std::endl;
    form3->beSigned(b1);
    b1.executeForm(*form3);
    std::cout << std::endl;
    
    return 0;
}