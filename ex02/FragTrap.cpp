/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:48:09 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 15:52:48 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " is born !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
		Name = copy.Name;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << Name << " return in is mother !" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << Name << " : HEY HEY ! Give me a HighFive ! o/" << std::endl;
}