/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.LifeCycle.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:16:48 by oldault           #+#    #+#             */
/*   Updated: 2024/06/12 11:16:27 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int size) :
  _size(size)
{}

Span::Span(const Span& other) :
  _size(other._size),
  _deque(other._deque)
{}

Span::~Span()
{}

Span& Span::operator=(const Span& other)
{
  if(&other != this)
  {
    _size = other._size;
    _deque = other._deque;
  }
  return (*this);
}
