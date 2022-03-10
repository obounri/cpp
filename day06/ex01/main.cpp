/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 23:06:06 by obounri           #+#    #+#             */
/*   Updated: 2022/03/10 00:31:16 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data data;
    Data *deser;
    uintptr_t   ser;

    data.string = "dazet";
    data.n = new int [4];
    data.n[0] = 42;
    data.n[1] = 69;
    data.n[2] = 420;
    data.n[3] = 666;
    
    ser = serialize(&data);
    deser = deserialize(ser);

    std::cout << deser->string << " ?" << std::endl;
    std::cout << deser->n[0] << std::endl << deser->n[1] << std::endl << deser->n[2] << std::endl << deser->n[3] << std::endl;
    
}