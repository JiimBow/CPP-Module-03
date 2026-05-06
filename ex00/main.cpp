/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodone <jodone@student.42angouleme.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:10:07 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/04 15:18:46 by jodone           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "=== ClapTrap Test ===" << std::endl;
    ClapTrap a("A");
    ClapTrap b("B");

    std::cout << std::endl;
    
    a.attack("B");
    b.takeDamage(0);

    b.attack("A");
    a.takeDamage(0);

    a.beRepaired(5);
    b.beRepaired(3);

    std::cout << std::endl;
    std::cout << "=== ClapTrap Energy Test ===" << std::endl;
    for (int i = 0; i < 10; i++)
        a.attack("B");

    std::cout << std::endl;

	a.beRepaired(5);

	std::cout << std::endl;

    return 0;
}