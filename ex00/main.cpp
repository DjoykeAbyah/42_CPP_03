/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 18:03:07 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 18:05:18 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap;
	
	clapTrap.attack("Gerald");
	ClapTrap claptrap1(clapTrap);
}