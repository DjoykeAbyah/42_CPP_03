/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 18:03:07 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/13 22:22:58 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.cpp"

int main()
{
	ClapTrap clapTrap1;
	ClapTrap clapTrap2("ClapTrap Sally");
	ScavTrap scavTrap1;
	ScavTrap scavTrap2("ScavTrap Gerald");
	
	clapTrap1.attack(clapTrap2.getName());
	clapTrap2.attack(clapTrap1.getName());
	scavTrap1.attack(scavTrap2.getName());
	scavTrap2.attack(clapTrap1.getName());

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	std::cout << clapTrap1 << clapTrap2;
	std::cout << scavTrap1 << scavTrap2 << std::endl;

	clapTrap2.beRepaired(20);
	clapTrap2.takeDamage(10);
	scavTrap2.beRepaired(40);
	scavTrap2.takeDamage(100);
	scavTrap1.guardGate();

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	std::cout << clapTrap1 << clapTrap2;
	std::cout << scavTrap1 << scavTrap2 << std::endl;
	
	clapTrap1.beRepaired(10);
	clapTrap1.takeDamage(5);
	scavTrap2.beRepaired(20);
	scavTrap2.takeDamage(30);

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	std::cout << clapTrap1 << clapTrap2;
	std::cout << scavTrap1 << scavTrap2 << std::endl;
	
	clapTrap2.attack(clapTrap1.getName());
	scavTrap2.attack(scavTrap1.getName());
	
	return 0;
}