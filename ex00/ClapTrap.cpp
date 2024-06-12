/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 13:39:58 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 17:39:12 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(nullptr), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& Name) : _name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "parametric constructor called" << std::endl;	
}

//new instance created
ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

//only update of the current instance
const ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	std::cout << "copy assignment operator overloader called" << std::endl;
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "deconstructor" << std::endl;	
}

void ClapTrap::attack(const std::string& target){
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " got attacked and got " << amount << " of hitpoints in damage " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " repaired itself and got " << amount << " of hit points back " << std::endl;
}