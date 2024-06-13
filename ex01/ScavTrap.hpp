/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: djoyke <djoyke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/06/12 22:47:20 by djoyke        #+#    #+#                 */
/*   Updated: 2024/06/13 20:49:47 by dreijans      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();											//default constructor
		ScavTrap(const std::string& Name);					//constructor with parameters
		ScavTrap(const ScavTrap& copy);					//copy constructor
		const ScavTrap& operator=(const ScavTrap& other);	//copy assignment operator overload
		~ScavTrap();
		
		void guardGate();
};