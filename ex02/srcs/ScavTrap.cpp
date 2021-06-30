/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 23:48:10 by mroux             #+#    #+#             */
/*   Updated: 2021/06/30 23:56:56 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :
	ClapTrap("", 100, 50, 20)
{
	std::cout << "ScavTrap constructor" << std::endl;
}
ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap param constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& cl)
{
	std::cout << "ScavTRap operator =" << std::endl;
	operator=(cl);
}

void		ScavTrap::display(std::ostream& stream) const
{
	stream << "SC4V-TP " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void 		ScavTrap::attack(std::string const& target)
{
	if (_energyPoints >= 5)
	{
		std::cout << "SC4V-TP " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! "<< std::endl;
		_energyPoints -= 5;
	}
	else
		std::cout << "Not enough enery points" << std::endl;
}

void		ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& cl)
{
	cl.display(stream);
	return (stream);
}
