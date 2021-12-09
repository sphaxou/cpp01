/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:35:44 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 00:13:15 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <string>

class Zombie
{
	public:
		void	announce(void) const;
		Zombie(void);
		Zombie(const std::string &name);
		~Zombie(void);

	private:
		std::string	_name;
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);
#endif
