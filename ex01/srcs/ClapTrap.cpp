/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 22:14:14 by mroux             #+#    #+#             */
/*   Updated: 2021/06/30 23:59:13 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	_name(""), _hitPoints(10), _maxHitPoints(10), _energyPoints(10), _maxEnergyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Default constructor" << std::endl;
}


ClapTrap::ClapTrap(std::string name):
	_name(name), _hitPoints(10), _maxHitPoints(10), _energyPoints(10), _maxEnergyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap Param constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) :
	_name(name), _hitPoints(hitPoints), _maxHitPoints(hitPoints), _energyPoints(energyPoints), _maxEnergyPoints(energyPoints), _attackDamage(attackDamage)
{
	std::cout << "ClapTrap Param2 constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& cl)
{
	std::cout << "ClapTrap Copy constructor" << std::endl;
	operator=(cl);
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& cl)
{
	std::cout << "ClapTrap Operator =" << std::endl;
	_name = cl._name;
	_hitPoints = cl._hitPoints;
	_maxHitPoints = cl. _maxHitPoints;
	_energyPoints = cl._energyPoints;
	_maxEnergyPoints = cl._maxEnergyPoints;
	_attackDamage = cl._attackDamage;
	return (*this);
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << "FR4G-TP " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl)
{
	cl.display(stream);
	return (stream);
}

void 		ClapTrap::attack(std::string const& target)
{
	if (_energyPoints >= 5)
	{
		std::cout << "FR4G-TP " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! "<< std::endl;
		_energyPoints -= 5;
	}
	else
		std::cout << "Not enough enery points" << std::endl;
}

void 		ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints = amount > _hitPoints ? 0 : _hitPoints - amount;
	if (_hitPoints == 0)
		std::cout << _name << " is dead." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints = _hitPoints + amount > _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
	_energyPoints = _energyPoints + amount > _maxEnergyPoints ? _maxEnergyPoints : _energyPoints + amount;
}
