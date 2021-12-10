/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:17:12 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 01:45:02 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &name)
{
	_type = name;
}

void Weapon::setType(const std::string &name)
{
	_type = name;
}

const std::string &Weapon::getType(void) const
{
	return(_type);
}
