/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:10:07 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 16:00:56 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== ClapTrap Test ===" << std::endl;
    ClapTrap a("OUGA BOUGA");

    a.attack("other bouga");
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

    std::cout << "=== Energy Test ===" << std::endl;
    for (int i = 0; i < 50; i++)
        b.attack("enemy");

    std::cout << std::endl;

    return 0;
}