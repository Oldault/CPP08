/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:20:08 by oldault           #+#    #+#             */
/*   Updated: 2024/06/13 18:34:32 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

void printError( void )
{
  std::cerr <<
    "\n\t" <<
    BOLD(BRED(" Invalid input. Try Again "))
  << std::endl << std::endl;
}

void printHeader( void )
{
  std::cout <<
    "\n\t" <<
    BOLD(BGRN(" Welcome ! ")) << std::endl <<
    UNDL(FGRN(" Which test would you like to see?: ")) << std::endl <<
    "\t" << ITAL(FYEL("BASIC (std::stack functions)")) <<
    "\t\t" << ITAL(FCYN("ITERATOR (can you iterate over the stack?)")) << std::endl <<
    "\t" << ITAL(FRED("COPY_ASSIGNMENT (Lifecycle functions)")) <<
    "\t" << ITAL(FBLU("EDGE_CASES (how much can the stack handle?)"))
  << std::endl << std::endl;
}
