/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:24:34 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 18:19:57 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "tests.hpp"

int main()
{
  std::string input;

  printHeader();
  while (true)
  {
    if (std::cin.eof())
      break ;
    std::cout << FYEL(" > ");
    std::getline(std::cin, input);
    
    switch(hashit(input))
    {
      case BASIC: testBasicFunctionality(); break;
      case ITERATOR: testIteratorFunctionality(); break;
      case COPY_ASSIGNMENT: testCopyAndAssignment(); break;
      case EDGE_CASES: testEdgeCases(); break;
      case EXIT: return 0;
      default: printError();
    }
  }

  return 0;
}
