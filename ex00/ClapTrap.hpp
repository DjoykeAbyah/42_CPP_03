/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dreijans <dreijans@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/11 21:26:59 by dreijans      #+#    #+#                 */
/*   Updated: 2024/06/11 22:24:49 by dreijans      ########   odam.nl         */
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
		
		ClapTrap(std::string& Name);
		~ClapTrap();

		//orthodox canonical form
		// Fixed(void);//default constructor
		// Fixed(const Fixed& other); //copy constructor
		// Fixed& operator=(const Fixed& other); //copy assignment operator overload
		// ~Fixed();
		
	public:
};