/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:45:40 by oldault           #+#    #+#             */
/*   Updated: 2024/06/10 15:08:40 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

string_code hashit (const std::string& str)
{
  if (str == "VECTOR") return VECTOR;
  if (str == "LIST") return LIST;
  if (str == "SET") return SET;
  if (str == "DEQUE") return DEQUE;
  if (str == "EXIT") return EXIT;
  return NONE;
}

void testVector()
{
  int arr[] = {10, 20, 30, 40, 50};
  std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(int));

  try
  {
    std::cout << FYEL("Index of 30:\t") << FYEL(UNDL(easyfind(vec, 30))) << std::endl;
    std::cout << FYEL("Index of 10:\t") << FYEL(UNDL(easyfind(vec, 10))) << std::endl;
    std::cout << FYEL("Index of 50:\t") << FYEL(UNDL(easyfind(vec, 50))) << std::endl;
    std::cout << FYEL("Index of 60:\t") << FYEL(UNDL(easyfind(vec, 60))) << std::endl;
  }
  catch (const std::logic_error &e)
  {
    std::cerr << BRED(e.what()) << std::endl;
  }
}

void testList()
{
  int arr[] = {100, 200, 300, 400, 500};
  std::list<int> lst(arr, arr + sizeof(arr) / sizeof(int));

  try
  {
    std::cout << FRED("Index of 300:\t") << FRED(UNDL(easyfind(lst, 300))) << std::endl;
    std::cout << FRED("Index of 100:\t") << FRED(UNDL(easyfind(lst, 100))) << std::endl;
    std::cout << FRED("Index of 500:\t") << FRED(UNDL(easyfind(lst, 500))) << std::endl;
    std::cout << FRED("Index of 600:\t") << FRED(UNDL(easyfind(lst, 600))) << std::endl;
  }
  catch (const std::logic_error &e)
  {
    std::cerr << BRED(e.what()) << std::endl;
  }
}

void testSet()
{
  int arr[] = {1, 2, 3, 4, 5};
  std::set<int> s(arr, arr + sizeof(arr) / sizeof(int));

  try
  {
    std::cout << FBLU("Index of 3:\t") << FBLU(UNDL(easyfind(s, 3))) << std::endl;
    std::cout << FBLU("Index of 1:\t") << FBLU(UNDL(easyfind(s, 1))) << std::endl;
    std::cout << FBLU("Index of 5:\t") << FBLU(UNDL(easyfind(s, 5))) << std::endl;
    std::cout << FBLU("Index of 6:\t") << FBLU(UNDL(easyfind(s, 6))) << std::endl;
  }
  catch (const std::logic_error &e)
  {
    std::cerr << BRED(e.what()) << std::endl;
  }
}

void testDeque()
{
  int arr[] = {7, 14, 21, 28, 35};
  std::deque<int> deq(arr, arr + sizeof(arr) / sizeof(int));

  try
  {
    std::cout << FMAG("Index of 21:\t") << FMAG(UNDL(easyfind(deq, 21))) << std::endl;
    std::cout << FMAG("Index of 7:\t") << FMAG(UNDL(easyfind(deq, 7))) << std::endl;
    std::cout << FMAG("Index of 35:\t") << FMAG(UNDL(easyfind(deq, 35))) << std::endl;
    std::cout << FMAG("Index of 42:\t") << FMAG(UNDL(easyfind(deq, 42))) << std::endl;
  }
  catch (const std::logic_error &e)
  {
    std::cerr << BRED(e.what()) << std::endl;
  }
}
