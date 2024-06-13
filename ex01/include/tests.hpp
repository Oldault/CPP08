/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:47:16 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 18:21:19 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colors.hpp"
#include <string>
#include <iostream>

enum string_code {
  BASIC,
  LIMIT,
  SHORTEST_SPAN,
  LONGEST_SPAN,
  COPY,
  ASSIGNEMENT,
  EXIT,
  NONE
};

// * Tests
string_code hashit (const std::string& str);
void testAddNumbers();
void testExceptionWhenAddingBeyondLimit();
void testShortestSpanWithFewNumbers();
void testLongestSpanWithFewNumbers();
void testCopyConstructor();
void testAssignmentOperator();

// * Print
void printError();
void printHeader();