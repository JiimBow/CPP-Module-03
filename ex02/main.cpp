/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:10:07 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 15:53:11 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap Test ===" << std::endl;
    ClapTrap a("BIP BOUP");

    a.attack("target");
    a.takeDamage(5);
    a.beRepaired(3);

    std::cout << std::endl;

    std::cout << "=== ScavTrap Test ===" << std::endl;
    ScavTrap b("Guardian");

    b.attack("enemy");
    b.takeDamage(20);
    b.beRepaired(10);
    b.guardGate();

    std::cout << std::endl;

    std::cout << "=== FragTrap Test ===" << std::endl;
    FragTrap c("Sergent");

    c.attack("target");
    c.takeDamage(30);
    c.beRepaired(15);
    c.highFivesGuys();

    std::cout << std::endl;

    std::cout << "=== Energy Test FragTrap ===" << std::endl;
    for (int i = 0; i < 100; i++)
        c.attack("dummy");

    std::cout << std::endl;

    c.beRepaired(5);

    std::cout << std::endl;

    return 0;
}