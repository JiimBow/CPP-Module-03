/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:06:58 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 16:04:28 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
private:
	
public:
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap& operator=(const ScavTrap& copy);
	~ScavTrap();

	void	attack(const std::string& target);
	void	guardGate(void);
};

