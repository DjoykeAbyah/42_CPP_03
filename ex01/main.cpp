/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 18:03:07 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/13 19:49:08 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	//why destruction in  reverse order?
	//how call constructor from the parent?
	//how call deconstructor for both classes?
	//instanciate what is specific to the inheritor not just the parent?
	//get user input?
	//public means accessible from anywhere void run(); (for animal)
	//protected means accessible from an instance of the class or instance of child class Leg legs[4];
	//private means only accessible from instance of the class std::string name;
	//protect
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

	std::cout << BLUE << std::endl << "stat update!" << RESET <<std::endl;
	std::cout << clapTrap1 << clapTrap2 << std::endl;

	clapTrap2.attack(clapTrap1.getName());

}