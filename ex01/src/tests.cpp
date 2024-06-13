/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:13:34 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 18:18:22 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "tests.hpp"

string_code hashit (const std::string& str)
{
  if (str == "BASIC") return BASIC;
  if (str == "LIMIT") return LIMIT;
  if (str == "SHORTEST_SPAN") return SHORTEST_SPAN;
  if (str == "LONGEST_SPAN") return LONGEST_SPAN;
  if (str == "COPY") return COPY;
  if (str == "ASSIGNEMENT") return ASSIGNEMENT;
  if (str == "EXIT") return EXIT;
  return NONE;
}

static void logH(const std::string& str)
{
  std::cout << FMAG((str)) << "\t";
}

void testAddNumbers()
{
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);

  sp.print();
  
  logH("Shortest Span: ");
  std::cout << UNDL(sp.shortestSpan()) << std::endl;
  logH("Longest Span: ");
  std::cout << UNDL(sp.longestSpan()) << std::endl;
}

void testExceptionWhenAddingBeyondLimit()
{
  Span sp = Span(2);
  sp.addNumber(1);
  sp.addNumber(2);
  try
  {
    sp.addNumber(3);
  }
  catch (const std::exception &e)
  {
    std::cout << FRED("Exception Test for Adding Beyond Limit:\n") << BRED(e.what()) << std::endl;
  }
}

void testShortestSpanWithFewNumbers()
{
  Span sp = Span(3);
  sp.addNumber(1);
  try
  {
    sp.shortestSpan();
  }
  catch (const std::exception &e)
  {
    std::cout << FRED("Exception Test for Shortest Span:\n") << BRED(e.what()) << std::endl;
  }
}

void testLongestSpanWithFewNumbers()
{
  Span sp = Span(3);
  sp.addNumber(1);
  try
  {
    sp.longestSpan();
  }
  catch (const std::exception &e)
  {
    std::cout << FRED("Exception Test for Longest Span:\n") << BRED(e.what()) << std::endl;
  }
}

void testCopyConstructor()
{
  Span sp1 = Span(5);
  sp1.addNumber(5);
  sp1.addNumber(3);
  Span sp2 = sp1;

  logH("sp1: ");
  std::cout << std::endl;
  sp1.print();
  logH("sp2: ");
  std::cout << std::endl;
  sp2.print();

  std::cout << std::endl;
  
  logH("Shortest Span for sp1: ");
  std::cout << UNDL(sp1.shortestSpan()) << std::endl;
  logH("Shortest Span for sp2: ");
  std::cout << UNDL(sp2.shortestSpan()) << std::endl;
  logH("Longest Span for sp1: ");
  std::cout << UNDL(sp1.longestSpan()) << std::endl;
  logH("Longest Span for sp2: ");
  std::cout << UNDL(sp2.longestSpan()) << std::endl;
}

void testAssignmentOperator()
{
  Span sp1 = Span(5);
  sp1.addNumber(5);
  sp1.addNumber(3);
  Span sp2 = Span(5);
  sp2 = sp1;

  logH("sp1: ");
  std::cout << std::endl;
  sp1.print();
  logH("sp2: ");
  std::cout << std::endl;
  sp2.print();

  std::cout << std::endl;

  logH("Shortest Span for sp1: ");
  std::cout << UNDL(sp1.shortestSpan()) << std::endl;
  logH("Shortest Span for sp2: ");
  std::cout << UNDL(sp2.shortestSpan()) << std::endl;
  logH("Longest Span for sp1: ");
  std::cout << UNDL(sp1.longestSpan()) << std::endl;
  logH("Longest Span for sp2: ");
  std::cout << UNDL(sp2.longestSpan()) << std::endl;
}

