/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 03:07:52 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 17:30:22 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <string>
#include <iostream>
int main(int ac, char **av)
{
	if (ac != 2)
		return (1);

	int	i;
	Karen Karen;
	std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = -1;
	while (++i < 4)
		if (tab[i] == av[1])
			break ;
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			Karen.complain(tab[0]);
			std::cout << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			Karen.complain(tab[1]);
			std::cout << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			Karen.complain(tab[2]);
			std::cout << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			Karen.complain(tab[3]);
			break ;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
