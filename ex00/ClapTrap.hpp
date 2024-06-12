/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/11 21:26:59 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 16:58:28 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//has to be in the orthodox canonical form
class ClapTrap
{
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
		
		
	public:
		ClapTrap();//default constructor
		ClapTrap(const std::string& Name);//constructor with parameters
		ClapTrap(const ClapTrap& other);//copy constructor
		const ClapTrap& operator=(const ClapTrap& other); //copy assignment operator overload
		~ClapTrap();
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

//for debugging
std::ostream& operator<<(std::ostream & stream, const ClapTrap& other);