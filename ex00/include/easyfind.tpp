/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 11:25:15 by oldault           #+#    #+#             */
/*   Updated: 2024/06/10 12:35:56 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(const T& container, const int num)
{
  typename T::const_iterator result =  std::find(container.begin(), container.end(), num);
  if(result != container.end()) {
    int distance = std::distance(container.begin(), result);
    return distance;
  } else {
    throw std::logic_error("Could not find given value inside container");
  }
}
