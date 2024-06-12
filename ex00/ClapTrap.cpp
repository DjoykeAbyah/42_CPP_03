/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 13:39:58 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 18:06:49 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//what if it's full health
//give specific messages for no energy or no hitpoints

ClapTrap::ClapTrap() : _name("Henk"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
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
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_energyPoints = _energyPoints - 1;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << "points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " tried to attack but failed" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints = _hitPoints - amount;
	std::cout << "ClapTrap " << this->_name << " got attacked and got " << amount << " of hitpoints in damage " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		_hitPoints = _hitPoints + amount;
		_energyPoints = _energyPoints - 1;
		std::cout << "ClapTrap " << this->_name << " repaired itself and got " << amount << " of hit points back " << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " tried to repair itself but failed" << std::endl;
}