/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:39:24 by obounri           #+#    #+#             */
/*   Updated: 2022/03/13 23:57:31 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <vector>
#include <deque>
#include <algorithm>

template <class T>
class MutantStack: public std::stack<T >
{
public:
    MutantStack();
    ~MutantStack();
    
    typedef typename std::deque<T>::iterator iterator;

    iterator begin() {
        return this->c.begin();
    }
    iterator end() {
        return this->c.end();
    }
    
};

template <class T>
MutantStack<T>::MutantStack()
{
}

template <class T>
MutantStack<T>::~MutantStack()
{
}



#endif