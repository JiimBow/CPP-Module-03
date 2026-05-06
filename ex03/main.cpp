/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:10:07 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 16:05:11 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap ===" << std::endl;
    ClapTrap a("Bip Boup");

    a.attack("target");
    a.takeDamage(3);
    a.beRepaired(2);

    std::cout << std::endl;

    std::cout << "=== ScavTrap ===" << std::endl;
    ScavTrap b("Guardian");

    b.attack("target");
    b.takeDamage(20);
    b.beRepaired(10);
    b.guardGate();

    std::cout << std::endl;

    std::cout << "=== FragTrap ===" << std::endl;
    FragTrap c("Hero");

    c.attack("target");
    c.takeDamage(30);
    c.beRepaired(15);
    c.highFivesGuys();

    std::cout << std::endl;

    std::cout << "=== DiamondTrap ===" << std::endl;
    DiamondTrap d("Diamond");

    d.attack("target");
    d.takeDamage(40);
    d.beRepaired(20);

    d.guardGate();
    d.highFivesGuys();
    d.whoAmI();

    std::cout << std::endl;

    std::cout << "=== Energy stress test ===" << std::endl;
    for (int i = 0; i < 100; i++)
        d.attack("dummy");

    std::cout << std::endl;

    return 0;
}