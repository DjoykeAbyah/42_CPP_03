/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/11 21:26:59 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/12 13:37:48 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

//has to be in the orthodox canonical form
class ClapTrap
{
	private:
		std::string& _name;
		int _hitPoints = 10;
		int _energyPoints = 10;
		int _attackDamage = 0;
		
		
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