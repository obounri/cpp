/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obounri <obounri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 19:18:46 by obounri           #+#    #+#             */
/*   Updated: 2022/03/11 23:27:41 by obounri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <exception>
#include <iostream>

class IndexOutOfRange: public std::exception {
private:
    const char * exception;
public:
    IndexOutOfRange(): exception("Index out of range !") {};
   const char * what () const throw () {
      return exception;
   }
};

template <class T>
class Array
{
private:
    T* data;
    int len;

public:
    Array();
    Array( int n );
    Array(const Array& arr);
    Array&  operator=(const Array& arr);
    T&      operator[] (int index) const ;
    ~Array();

    int size() const ;

    void  deepCopy(const Array& arr);
    IndexOutOfRange _ioor;
    
};

template<class T>
Array<T>::Array() {
    this->data = 0;
    len = 0;
}

template<class T>
Array<T>::Array( int n ) {
    this->data = new T[n];
    this->len = n;
}

template<class T>
Array<T>::~Array() {
    if (this->len != 0)
        delete [] this->data;
}

template<class T>
int  Array<T>::size() const {
    return this->len;
}

template<class T>
void Array<T>::deepCopy(const Array& arr) {
    if (this->len != 0)
        delete [] this->data;
    this->len = arr.size();
    if (arr.data != 0)
    {
        this->data = new T[this->len];
        for (int i = 0; i < this->len; i++)
        {
            this->data[i] = arr[i];
        }
    }
    else
        this->data = 0;
}

template<class T>
Array<T>::Array(const Array& arr):
len(0)
{
    deepCopy(arr);
}

template<class T>
Array<T>&  Array<T>::operator=(const Array& arr) {
    deepCopy(arr);
    return *this;
}

template<class T>
T&      Array<T>::operator[] (int index) const {
    if (index >= this->size()) {
        throw _ioor;
    }
    return this->data[index];
}

template<class T>
std::ostream&   operator<<(std::ostream& out, Array<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        out << arr[i] << std::endl;
    }
    return out;
}

#endif