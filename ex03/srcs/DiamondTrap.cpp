/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 00:17:06 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 00:38:18 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//-------- DiamondTrap.cpp----------

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
	ClapTrap("_clap_name", 100, 50, 30), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap constructor" << std::endl;
	_name = "";
}

DiamondTrap::DiamondTrap(std::string name):
	ClapTrap(name + "_clap_name", 100, 50, 30), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap param constructor" << std::endl;
	_name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& cl)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
	operator=(cl);
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& cl)
{
	std::cout << "Diamondtrap operator =" << std::endl;
	ClapTrap::operator=(cl);
	_name = cl._name;
	return (*this);
}

void		DiamondTrap::display(std::ostream& stream) const
{
	stream << "Diamond-TP " << _name << " / " << ClapTrap::_name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void		DiamondTrap::whoAmI() const
{
	std::cout << *this << std::endl;
}

void 		DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

std::ostream&	operator<<(std::ostream& stream, DiamondTrap const& cl)
{
	cl.display(stream);
	return (stream);
}
