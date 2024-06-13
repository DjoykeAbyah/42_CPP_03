/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 22:47:17 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/13 21:32:15 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	std::cout << "ScavTrap default constructor called and created " 
		<< MAGENTA << this->getName() << RESET << std::endl;
	std::cout << CYAN <<"Stats are: " << RESET << *this << std::endl;
	this->setName("Default ScavTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string& Name) : ClapTrap(Name){
	std::cout << "ScavTrap parametric constructor called and created " 
		<< MAGENTA << Name << RESET << std::endl; 	
	std::cout << CYAN << "Stats are: " << RESET << *this << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& copy){
	*this = copy;
	std::cout << "ScavTrap copy constructor called and created " 
		<< MAGENTA << this->_name << RESET << std::endl;
	std::cout << CYAN << "Stats are: " << RESET << *this << std::endl;
}

//is this getting it from ScavTrap or Claptrap??
const ScavTrap& ScavTrap::operator=(const ScavTrap& copy){
	std::cout << BLUE << "ScavTrap copy assignment operator overloader called" << RESET << "\n\n";
	if (this != &copy){
		// _name = copy._name;
		// _hitPoints = copy._hitPoints;
		// _energyPoints = copy._energyPoints;
		// _attackDamage = copy._attackDamage;
		// this->setName(copy.getName());
		// this->setHitPoints(copy.getHitPoints());
		// this->setEnergyPoints(copy.getEnergyPoints());
		// this->setAttackDamage(copy.getAttackDamage());
		ClapTrap::operator=(copy);
	}
	return *this;
}

ScavTrap::~ScavTrap(){
	std::cout << RED << "ScavTrap deconstructor called. Oh no it destroyed " << RESET << MAGENTA << this->_name << "!" << RESET << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << YELLOW << "ScavTrap " << MAGENTA << this->getName() << RESET << "is just guarding the gate guys. Nothing to see here" << RESET << std::endl;
}

