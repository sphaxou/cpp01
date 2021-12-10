/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:48:29 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 02:41:02 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>


static void	_searchandreplace(std::string &s, const std::string &s1, const std::string &s2)
{
	int	i;
	int	len;

	i = 0;
	len = s1.size();
	while (s[i])
	{
		if (!s.compare(i, len, s1))
		{
			s.erase(i, len);
			s.insert(i, s2);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "./sed Filename s1 s2." << std::endl;
		return (0);
	}
	std::ifstream ifs(av[1]);
	if (!ifs)
	{
		std::cout << "Cannot access entry file\n";
		return (1);
	}
	std::ofstream ofs(std::string(av[1]) + ".replace");
	if (!ofs)
	{
		std::cout << "Cannot open output file\n";
		return (1);
	}
	std::string s;
	if (ifs.peek() != EOF && !std::getline(ifs, s, '\0'))
	{
		std::cout << "Read Error\n";
		return (1);
	}
	_searchandreplace(s, av[2], av[3]);
	ofs << s;
	ifs.close();
	ofs.close();
	return (0);
}
