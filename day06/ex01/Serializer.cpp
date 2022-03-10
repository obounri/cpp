/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:55:08 by obounri           #+#    #+#             */
/*   Updated: 2022/03/09 23:05:47 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t serialize(Data* ptr) {
    uintptr_t u_ptr;

    u_ptr = reinterpret_cast<uintptr_t>(ptr);
    return (u_ptr);
}


Data*     deserialize(uintptr_t raw) {
    Data* ptr;

    ptr = reinterpret_cast<Data *>(raw);
    return ptr;
}
