/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 00:00:19 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 00:12:23 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main()
{
	Zombie	*zombieA = newZombie("Bob");
	Zombie	*zombieB = newZombie("Franck");
	Zombie	*zombieC = newZombie("Truc");
	Zombie	*zombieD = newZombie("Muche");
	randomChump("Bobette");
	randomChump("Franckette");
	zombieA->announce();
	randomChump("Truckette");
	randomChump("Muchette");
	zombieB->announce();
	zombieC->announce();
	zombieD->announce();
	delete zombieA;
	delete zombieB;
	delete zombieC;
	delete zombieD;
	return (0);
}

