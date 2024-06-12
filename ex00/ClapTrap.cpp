/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 13:39:58 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 22:05:02 by djoyke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//what if it's full health
//give specific messages for no energy or no hitpoints

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "default constructor called and created " 
		<< MAGENTA << this->_name << RESET << std::endl;
	std::cout << CYAN <<"Stats are: " << RESET << *this << std::endl;
}

ClapTrap::ClapTrap(const std::string& Name) : _name(Name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "parametric constructor called and created " 
		<< MAGENTA << Name << RESET << std::endl; 	
	std::cout << CYAN << "Stats are: " << RESET << *this << std::endl;
}

//new instance created
ClapTrap::ClapTrap(const ClapTrap& other){
	*this = other;
	std::cout << "copy constructor called and created " 
		<< MAGENTA << this->_name << RESET << std::endl;
	std::cout << CYAN << "Stats are: " << RESET << *this << std::endl;
}

//only update of the current instance
const ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	std::cout << BLUE << "copy assignment operator overloader called" << RESET << "\n\n";
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
	std::cout << RED << "deconstructor called. Oh no it destroyed " << RESET << MAGENTA << this->_name << "!" << RESET << std::endl;
}

int ClapTrap::getHitPoints() const{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints() const{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage() const{
	return (this->_attackDamage);
}

const std::string& ClapTrap::getName() const{
	return (this->_name);
}

void ClapTrap::setHitPoints(int amount){
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount){
	this->_energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount){
	this->_attackDamage = amount;
}

void ClapTrap::attack(const std::string& target){
	if (_hitPoints == 0)
	{
		std::cout	<< MAGENTA << this->_name << RESET 
					<< " can't attack, hitpoints are gone, so gotta roll!" << std::endl;
		return ;
	}
	else if (_energyPoints == 0)
	{
		std::cout	<< MAGENTA << this->_name << RESET 
					<< " can't attack, has no energy, does anyone have a powerbank?" << std::endl;
		return ;
	}
	std::cout 	<< MAGENTA << this->_name << RESET << " attacks " << MAGENTA << target << RESET << " causing " 
				<< MAGENTA << this->_attackDamage << RESET << " points damage!" << RESET << std::endl;
	_energyPoints = _energyPoints - 1;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (amount > _hitPoints)
	{
		std::cout << MAGENTA << this->_name << RESET << " can't take anymore damage, has no hitpoints, left leave it alone!" << RESET << std::endl;
		return ;
	}
	_hitPoints = _hitPoints - amount;
	std::cout 	<< MAGENTA << this->_name << RESET << " got attacked and got " 
				<< MAGENTA << amount << RESET << " of hitpoints in damage!" << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints == 0)
	{
		std::cout << MAGENTA << this->_name << RESET <<" tried to repair itself but failed is too tired, no energypoints left" << std::endl;
		return ;
	}
	else if (_hitPoints == 0)
	{
		std::cout << MAGENTA << this->_name << RESET << " tried to repair itself but it's just too damaged, no hitpoints left" << std::endl;
		return ;
	}
	else if (_hitPoints + amount > 10)
	{
		std::cout << MAGENTA << this->_name << RESET << " didn't repair itself! Don't go overboard that's over the max amount of hitpoints" << std::endl;
		return ;	
	}
	_hitPoints = _hitPoints + amount;
	_energyPoints = _energyPoints - 1;
	std::cout 	<< MAGENTA << this->_name << RESET << " repaired itself and got " 
				<< MAGENTA << amount << RESET << " of hit points back " << std::endl;
}

std::ostream& operator<<(std::ostream & stream, const ClapTrap& other)
{
	stream 	<< MAGENTA << "ClapTrap " << other.getName() 
			<< RESET << " [HP: " << other.getHitPoints() 
			<< ", EP: " << other.getEnergyPoints() 
			<< ", AD: " << other.getAttackDamage() << "]" << "\n";
	return stream;
}