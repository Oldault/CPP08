/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:00:47 by svolodin          #+#    #+#             */
/*   Updated: 2024/06/10 15:02:18 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void printError( void )
{
  std::cerr <<
    "\n\t" <<
    BOLD(BRED(" Invalid input. Try: ")) <<
    ITAL(BRED("\'VECTOR\', \'LIST\', \'SET\' or \'DEQUE\' "))
  << std::endl << std::endl;
}

void printHeader( void )
{
  std::cout <<
    "\n\t" <<
    BOLD(BGRN(" Welcome ! ")) << std::endl <<
    FGRN(" Please input a type of container we will experiment with. Here are the types: ") << std::endl <<
    "\t" << ITAL(FYEL("VECTOR")) <<
    "\t" << ITAL(FRED("LIST")) <<
    "\t" << ITAL(FBLU("SET")) <<
    "\t" << ITAL(FMAG("DEQUE"))
  << std::endl << std::endl;
}
