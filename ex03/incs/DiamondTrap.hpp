/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroux <mroux@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 00:14:36 by mroux             #+#    #+#             */
/*   Updated: 2021/07/01 00:30:20 by mroux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap(DiamondTrap const&);
		DiamondTrap&	operator=(DiamondTrap const&);
		void			display(std::ostream& stream) const;
		void 			attack(std::string const& target);
		void			whoAmI() const;

	private:
		std::string		_name;

};

std::ostream&	operator<<(std::ostream& stream, DiamondTrap const& cl);

#endif
