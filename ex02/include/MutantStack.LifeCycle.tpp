/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.LifeCycle.tpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:38:37 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 15:04:41 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>()
{}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& other) : std::stack<T, Container>(other)
{}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack<T, Container>& other)
{
  if (this != &other) {
    std::stack<T, Container>::operator=(other);
  }
  return *this;
}
