/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 23:48:10 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 09:18:35 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :
	ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap constructor" << std::endl;
}
FragTrap::FragTrap(std::string name) :
	ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap param constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

FragTrap::FragTrap(FragTrap const& cl)
{
	std::cout << "FragTRap operator =" << std::endl;
	operator=(cl);
}

void		FragTrap::display(std::ostream& stream) const
{
	stream << "Frag-TP " << _name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points and " << _attackDamage << " attack dammage.";
}

void		FragTrap::highFivesGuys()
{
	std::cout << "High Five man !" << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, FragTrap const& cl)
{
	cl.display(stream);
	return (stream);
}
