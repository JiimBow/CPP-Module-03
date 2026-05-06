/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:11:16 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/05 10:15:36 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string newName) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "A ClapTrap " << newName << " is born !" << std::endl;
	Name = newName;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy)
{
	if (this != &copy)
		Name = copy.Name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "A ClapTrap " << Name << " return in his mother !" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout	<< "ClapTrap " << Name << " attacks " << target
					<< ", causing " << attackDamage << " points of damage !"
					<< std::endl;
	}
	else
		std::cout	<< "ClapTrap " << Name << " is unable to attack T-T" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	std::cout	<< "ClapTrap " << Name << " has taken " << amount
				<< " points of damage !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		hitPoints += amount;
		if (hitPoints > 10)
			hitPoints = 10;
		std::cout	<< "ClapTrap " << Name << " repaired himself for " << amount
					<< " hit points !" << std::endl;
	}
	else
		std::cout	<< "Claptrap " << Name << " can't repair, bouhou..." << std::endl;
}