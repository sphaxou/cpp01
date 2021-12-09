/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:37:26 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 00:24:02 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void) const
{
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{}

Zombie::Zombie(const std::string &name)
{
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " ate too many brains and imploded" << std::endl;
}

void	Zombie::setname(const std::string &name)
{
	_name = name;
}
