/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:18:47 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 00:48:23 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

static std::string _customname(int i, const std::string &name)
{
	std::ostringstream	stream;
	stream << name << i;
	return (stream.str());
}

Zombie *zombieHorde(int n, std::string name)
{
	int	i;

	Zombie *horde = new Zombie[n];
	i = -1;
	while (++i < n)
		horde[i].setname(_customname(i, name));
	return (horde);
}
