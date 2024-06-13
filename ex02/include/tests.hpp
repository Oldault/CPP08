/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:15:10 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 18:26:52 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TESTS_HPP__
#define __TESTS_HPP__

#include "Colors.hpp"
#include <string>
#include <iostream>

enum string_code {
  BASIC,
  ITERATOR,
  COPY_ASSIGNMENT,
  EDGE_CASES,
  EXIT,
  NONE
};

// * Tests
string_code hashit (const std::string& str);
void testBasicFunctionality();
void testIteratorFunctionality();
void testCopyAndAssignment();
void testEdgeCases();

// * Print
void printError();
void printHeader();

#endif // __TESTS_HPP__