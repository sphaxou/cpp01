/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 02:48:55 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 03:16:24 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(const std::string &level)
{
	t_funtab tab[4];
	tab[0].f = &Karen::debug;
	tab[0].level = "debug";
	tab[1].f = &Karen::info;
	tab[1].level = "info";
	tab[2].f = &Karen::warning;
	tab[2].level = "warning";
	tab[3].f = &Karen::error;
	tab[3].level = "error";

	int	i;

	i = -1;
	while (++i < 4)
		if (tab[i].level == level)
			(this->*tab[i].f)();
}
