/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:26:31 by obounri           #+#    #+#             */
/*   Updated: 2022/03/08 19:10:43 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
    {
        PresidentialPardonForm form1("f1");
    
        Bureaucrat b1("GoodBureaucrat", 20);
        form1.beSigned(b1);
        form1.execute(b1);
        
        // Bureaucrat b2("BadBureaucrat", 21);
        // // // Form       form1("RaiseForm", 20, 20);
        // std::cout << std::endl;

        // test insertion («) operator overloading;
        // std::cout << b1;
        // std::cout << b2;
        // std::cout << form;
        // std::cout << form1 << std::endl;
    
        // form.beSigned(b1);
        // std::cout << form;
        // std::cout << std::endl;
        // throws exception GradeTooLow;
        // form1.beSigned(b2);
        // std::cout << form1;
        // std::cout << std::endl;

        // Increment BadBureaucrat's grade so he can sign the form;
        // b2.incrementGrade();
        // form1.beSigned(b2);
        // std::cout << form1;
        // std::cout << std::endl;
    }
        // std::cout << std::endl;
        // this throws exception;
    
    return 0;
}