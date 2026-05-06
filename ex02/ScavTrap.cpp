/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:07:06 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 16:02:30 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "ScavTrap " << name << " is born !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	if (this != &copy)
		Name = copy.Name;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " return in is mother !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout	<< "ScavTrap " << Name << " attacks " << target
					<< ", causing " << attackDamage << " points of damage !"
					<< std::endl;
	}
	else
		std::cout	<< "ScavTrap " << Name << " is unable to attack T-T" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << Name << " is now in Gate keeper mode !" << std::endl;
}