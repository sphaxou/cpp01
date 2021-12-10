/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:19:01 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 01:43:01 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <string>
#include <iostream>

HumanA::HumanA(const std::string &name, const Weapon &weapon):_weapon(weapon)
{
	_name = name;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks using \"" << _weapon.getType() << '"' << std::endl;
}
