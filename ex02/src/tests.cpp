/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:09:21 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 18:54:14 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "tests.hpp"

string_code hashit (const std::string& str)
{
  if (str == "BASIC") return BASIC;
  if (str == "ITERATOR") return ITERATOR;
  if (str == "COPY_ASSIGNMENT") return COPY_ASSIGNMENT;
  if (str == "EDGE_CASES") return EDGE_CASES;
  if (str == "EXIT") return EXIT;
  return NONE;
}

static void logH(const std::string& str)
{
  std::cout << "\n\t" << FMAG(UNDL(str)) << "\n";
}

static void logH1(const std::string& str)
{
  std::cout << "\n\t" << BGRN(str) << "\n\n";
}

void testBasicFunctionality()
{
  logH1(" Testing Basic Functionality... ");
  MutantStack<int> mstack;

  logH("Pushing 5, 17...");
  mstack.push(5);
  mstack.push(17);
  std::cout << FMAG("Top element: ") << "\t\t"
    << BOLD(mstack.top()) << ITAL(" (Expected: 17)")
  << std::endl;

  mstack.pop();
  std::cout << FMAG("After pop, size: ") << "\t"
    << BOLD(mstack.size()) << ITAL(" (Expected: 1)")
  << std::endl;
  std::cout << FMAG("Top element: ") << "\t\t"
    << BOLD(mstack.top()) << ITAL(" (Expected: 5)")
  << std::endl;

  logH("Pushing 3, 5, 737, 0...");
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  std::cout << FMAG("Current stack size: ") << "\t"
    << BOLD(mstack.size()) << ITAL(" (Expected: 5)")
  << std::endl;
  mstack.pop();
  std::cout << FMAG("After pop, size: ") << "\t"
    << BOLD(mstack.size()) << ITAL(" (Expected: 4)")
  << std::endl;
  std::cout << FMAG("Top element: ") << "\t\t"
    << BOLD(mstack.top()) << ITAL(" (Expected: 737)")
  << std::endl;
}

void testIteratorFunctionality()
{
  logH1(" Testing Iterator Functionality... ");
  MutantStack<int> mstack;
  logH("Pushing 5, 17, 3, 5, 737, 0...");
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);

  logH("Iterating through stack:");
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();

  std::cout << std::endl;
  while (it != ite)
  {
    std::cout << "👉🏻 " << BOLD(FYEL(*it)) << "\n";
    ++it;
  }
  std::cout << "\n\n";
}

void testCopyAndAssignment()
{
  logH1(" Testing Copy and Assignment... ");
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  mstack.push(3);

  logH("Copying stack...");
  MutantStack<int> copiedStack(mstack);
  std::cout << FMAG("Original stack size: ") << "\t"
    << BOLD(mstack.size()) << ITAL(" (Expected: 3)")
  << std::endl;
  std::cout << FMAG("Copied stack size: ") << "\t"
    << BOLD(copiedStack.size()) << ITAL(" (Expected: 3)")
  << std::endl;

  logH("Assigning stack...");
  MutantStack<int> assignedStack;
  assignedStack = mstack;
  std::cout << FMAG("Assigned stack size: ") << "\t"
    << BOLD(assignedStack.size()) << ITAL(" (Expected: 3)")
  << std::endl;
}

void testEdgeCases()
{
  logH1("Testing Edge Cases...");
  MutantStack<int> mstack;

  logH("Testing pop on empty stack (Expecting no crash)...");
  try
  {
    mstack.pop();
  }
  catch (const std::exception &e)
  {
    std::cout << FRED("Caught exception: ") << BRED(BOLD(e.what())) << std::endl;
  }

  logH("Testing top on empty stack (Expecting no crash)...");
  try
  {
    mstack.top();
  }
  catch (const std::exception &e)
  {
    std::cout << FRED("Caught exception: ") << BRED(BOLD(e.what())) << std::endl;
  }

  std::cout << FMAG("Testing size on empty stack: ") << "\t"
    << BOLD(mstack.size()) << ITAL(" (Expected: 0)")
  << std::endl;
}
