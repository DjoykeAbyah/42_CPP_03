/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 18:03:07 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/15 17:11:41 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap clapTrap1;
	// ClapTrap clapTrap2("ClapTrap Sally");
	// ScavTrap scavTrap1;
	// ScavTrap scavTrap2("ScavTrap Gerald");
	FragTrap fragTrap1;
	FragTrap fragTrap2("Fragtrap Hank");
	
	// clapTrap1.attack(clapTrap2.getName());
	// scavTrap1.attack(scavTrap2.getName());
	fragTrap1.attack(fragTrap2.getName());
	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;

	// scavTrap1.takeDamage(1);
	// scavTrap1.beRepaired(1);

	fragTrap1.takeDamage(10);
	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;
	fragTrap1.beRepaired(5);
		std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;

	// clapTrap2.beRepaired(20);
	// clapTrap2.takeDamage(10);
	// scavTrap1.beRepaired(1);
	// scavTrap2.beRepaired(40);
	// scavTrap2.takeDamage(100);
	// scavTrap1.guardGate();

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;
	
	// clapTrap1.beRepaired(10);
	// clapTrap1.takeDamage(5);
	// scavTrap2.beRepaired(20);
	// scavTrap2.takeDamage(30);
	fragTrap2.takeDamage(100);
	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;
	fragTrap2.beRepaired(20);

	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;
	
	// clapTrap2.attack(clapTrap1.getName());
	// scavTrap2.attack(scavTrap1.getName());
	fragTrap2.attack(fragTrap1.getName());
	std::cout << BLUE << std::endl << "stat update!" << RESET << std::endl;
	// std::cout << clapTrap1 << clapTrap2;
	// std::cout << scavTrap1 << scavTrap2;
	std::cout << fragTrap1 << fragTrap2 << std::endl;
	fragTrap1.highFivesGuys();
	
	return 0;
}