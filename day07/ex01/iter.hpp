/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:32:05 by obounri           #+#    #+#             */
/*   Updated: 2022/03/12 00:08:36 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

template <typename T>
void    iter(T* arr, int len, void (*fct)(T &)) {
    int i = -1;

    while (++i < len)
        (*fct)(arr[i]);
}

#endif