/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:00:19 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 00:54:26 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

int	main(int ac, char **av)
{
	int i = 0;
	int	n;

	if (ac < 3)
		return (0);
	n = std::atoi(av[1]);
	Zombie *Horde=zombieHorde(n, av[2]);
	i = 0;
	while (i < n)
		Horde[i++].announce();
	i = 0;
	delete[]Horde;
	return (0);
}
