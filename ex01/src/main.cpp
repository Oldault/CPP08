/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:38:33 by oldault           #+#    #+#             */
/*   Updated: 2024/06/12 10:49:56 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
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
      case BASIC: testAddNumbers(); break;
      case LIMIT: testExceptionWhenAddingBeyondLimit(); break;
      case SHORTEST_SPAN: testShortestSpanWithFewNumbers(); break;
      case LONGEST_SPAN: testLongestSpanWithFewNumbers(); break;
      case COPY: testCopyConstructor(); break;
      case ASSIGNEMENT: testAssignmentOperator(); break;
      case EXIT: return 0;
      default: printError();
    }
  }

  return 0;
}