/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:26:57 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 19:03:53 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
#define __MUTANTSTACK_HPP__

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <stack>
#include <iterator>
#include <list>
#include <vector>
#include <set>
#include <deque>
#include <stdexcept>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> 
{
  public:
    MutantStack();
    MutantStack(const MutantStack& other);
    ~MutantStack();

    MutantStack& operator=(const MutantStack& other);

    typedef typename Container::iterator iterator;
    typedef typename Container::const_iterator const_iterator;

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;

    void pop();
    T& top();
    const T& top() const;
};

#include "MutantStack.LifeCycle.tpp"
#include "MutantStack.tpp"

#endif // __MUTANTSTACK_HPP__