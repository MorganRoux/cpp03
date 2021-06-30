/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 23:27:42 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 00:37:05 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
int main(void)
{
	FragTrap	a;
	DiamondTrap	b("Morgan");
	ClapTrap	c("Hugues");
	ScavTrap	d("Ben");

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.whoAmI();
	std::cout << "===" << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	b.takeDamage(20);
	std::cout << b << std::endl;
	b.beRepaired(3);
	std::cout << b << std::endl;
	b.attack("Eric");
	b.attack("Eric");
	std::cout << b << std::endl;
	b.attack("Eric");
	std::cout << b << std::endl;
	b.beRepaired(100);
	std::cout << b << std::endl;
	b.attack("Eric");
}
