/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 18:03:07 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 22:02:30 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	//get user input?
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("Sally");
	
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.takeDamage(8);
	clapTrap2.beRepaired(4);

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	std::cout << clapTrap1 << clapTrap2 << std::endl;

	clapTrap1.beRepaired(20);
	clapTrap1.takeDamage(10);

	std::cout << BLUE << std::endl << "stat update!" << RESET <<std::endl;
	std::cout << clapTrap1 << clapTrap2 << std::endl;
	
	clapTrap1.beRepaired(10);
	clapTrap1.takeDamage(5);
	clapTrap2.attack(clapTrap1.getName());

	clapTrap2.takeDamage(98938292839238932);

}