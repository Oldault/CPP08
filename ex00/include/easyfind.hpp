/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:23:03 by oldault           #+#    #+#             */
/*   Updated: 2024/06/10 15:02:50 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <set>
#include <deque>

enum string_code {
  VECTOR,
  LIST,
  SET,
  DEQUE,
  EXIT,
  NONE
};

string_code hashit (const std::string& str);
void  testVector();
void  testList();
void  testSet();
void  testDeque();

void printError();
void printHeader();

template <typename T>
int easyfind(const T& container, const int num);

#include "easyfind.tpp"

#endif // __EASYFIND_HPP__