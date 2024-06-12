/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 16:40:21 by oldault           #+#    #+#             */
/*   Updated: 2024/06/12 10:46:55 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <set>
#include <deque>

class Span
{
  private:
    size_t _size;
    std::deque<int> _deque;

  public:
    Span( unsigned int size );
    Span( const Span& other );
    ~Span();
    
    Span& operator=( const Span& other );
    void  print( void );

    void  addNumber(int num);
    void  fill(size_t amount, int num);
    size_t  shortestSpan( void );
    size_t  longestSpan( void );

  class notEnoughVars : public std::exception {
    public:
      const char *what() const throw() {
        return (" One or less variables inside Span 😱 ");
      }
  };
  class SpanFull : public std::exception {
    public:
      const char *what() const throw() {
        return (" There is no more space left inside the Span 🤓 ");
      }
  };
};

#endif // __SPAN_HPP__