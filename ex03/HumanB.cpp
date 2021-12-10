/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:19:01 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 01:43:36 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(const std::string &name)
{
	_name = name;
	_weapon = NULL;
}

void	HumanB::setWeapon(const Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks using \"" << _weapon->getType() << '"' << std::endl;
}
