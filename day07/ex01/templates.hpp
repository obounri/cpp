/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:45:51 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 18:30:21 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
#define TEMPLATES_H

template <typename T>
void    swap(T &arg1, T &arg2) {
    T   tmp;

    tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template <typename T>
T   min(T arg1, T arg2) {
    if (arg2 <= arg1)
        return arg2;
    else
        return arg1;
}

template <typename T>
T   max(T arg1, T arg2) {
    if (arg2 >= arg1)
        return arg2;
    else
        return arg1;
}

template <typename T>
void   multiply(T &arg) {
    arg = arg * T(2);
}

template <typename T>
void   output(T &arg) {
    std::cout << arg << " ";
}

#endif