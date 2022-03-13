/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:00:01 by obounri           #+#    #+#             */
/*   Updated: 2022/03/14 00:32:07 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "iostream"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(69);
    mstack.push(17);
    std::cout << "top = " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size = " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(420);
    //[...]
    mstack.push(0);
    mstack.push(-81);
    mstack.push(63);
    mstack.push(42);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    MutantStack<int>::iterator found;

    std::cout << "max_element = " << *std::max_element(it, ite) << std::endl;
    std::cout << "min_element = " << *std::min_element(it, ite) << std::endl;
    ++it;
    --it;

    found = std::find(mstack.begin(), mstack.end(), 420);
    std::cout << "found = " << *found <<  std::endl;
    
    std::sort(mstack.begin(), mstack.end());
    std::reverse(mstack.begin(),mstack.end());

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "size = " << mstack.size() << std::endl;
    std::stack<int> s(mstack);
    return 0;
}