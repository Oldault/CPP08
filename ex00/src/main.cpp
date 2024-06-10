/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:27:30 by oldault           #+#    #+#             */
/*   Updated: 2024/06/10 15:00:17 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

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
      case VECTOR: testVector(); break;
      case LIST: testList(); break;
      case SET: testSet(); break;
      case DEQUE: testDeque(); break;
      case EXIT: return 0;
      default: printError();
    }
  }

  return 0;
}
