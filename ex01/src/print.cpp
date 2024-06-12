/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:41:52 by oldault           #+#    #+#             */
/*   Updated: 2024/06/12 10:51:47 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
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
    "\t" << ITAL(FYEL("BASIC (subject main)")) <<
    "\t\t" << ITAL(FYEL("LIMIT (adding numbers beyond limit)")) << std::endl <<
    "\t" << ITAL(FBLU("SHORTEST_SPAN (the function)")) <<
    "\t" << ITAL(FBLU("LONGEST_SPAN (also the function)")) << std::endl << 
    "\t" << ITAL(FMAG("COPY (the constructor)")) <<
    "\t\t" << ITAL(FMAG("ASSIGNEMENT (the operator)"))
  << std::endl << std::endl;
}