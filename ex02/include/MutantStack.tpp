/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:41:42 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 19:03:37 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
  return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
  return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::begin() const
{
  return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator MutantStack<T, Container>::end() const
{
  return this->c.end();
}

template <typename T, typename Container>
void MutantStack<T, Container>::pop()
{
  if (this->empty())
  {
    throw std::out_of_range("MutantStack::pop(): empty stack");
  }
  std::stack<T, Container>::pop();
}

template <typename T, typename Container>
T &MutantStack<T, Container>::top()
{
  if (this->empty())
  {
    throw std::out_of_range("MutantStack::top(): empty stack");
  }
  return std::stack<T, Container>::top();
}

template <typename T, typename Container>
const T &MutantStack<T, Container>::top() const
{
  if (this->empty())
  {
    throw std::out_of_range("MutantStack::top(): empty stack");
  }
  return std::stack<T, Container>::top();
}
