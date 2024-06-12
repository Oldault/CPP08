/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:17:28 by oldault           #+#    #+#             */
/*   Updated: 2024/06/12 11:14:00 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::print(void)
{
  std::cout << FMAG(UNDL("Span array values are:")) << std::endl;
  for (size_t i = 0; i < _deque.size(); i++) {
    std::cout << "\t" << ITAL( _deque.at(i));
  }
  std::cout << "\n\n";
}

void Span::addNumber(int num)
{
  if (_deque.size() == _size)
    throw Span::SpanFull();
  _deque.push_back(num);
}

void Span::fill(size_t amount, int num)
{
  if (_deque.size()  == _size)
    throw Span::SpanFull();
  for (size_t i = _deque.size(); i < amount; i++) {
    _deque.push_back(num);
  }
}

size_t Span::shortestSpan(void)
{
  if (_deque.size() <= 1)
    throw Span::notEnoughVars();

  std::deque<int> local = _deque;
  std::sort(local.begin(), local.end());

  size_t shortestDiff = std::numeric_limits<int>::max();
  for (size_t i = 0; i < local.size() - 1; i++) {
    size_t elementDiff = local[i + 1] - local[i];
    if ((elementDiff <= shortestDiff))
      shortestDiff = elementDiff;
  }
  
  return shortestDiff;
}

size_t Span::longestSpan(void)
{
  if (_deque.size() <= 1)
    throw Span::notEnoughVars();
  std::deque<int>::iterator min = std::min_element(_deque.begin(), _deque.end());
  std::deque<int>::iterator max = std::max_element(_deque.begin(), _deque.end());
  return (*max - *min);
}
