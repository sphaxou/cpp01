/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:19:02 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 01:40:42 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <string>
class HumanB
{
	public:
		HumanB(const std::string &name);
		void	attack() const;
		void	setWeapon(const Weapon &weapon);

	private:
		std::string _name;
		const Weapon	*_weapon;
};
#endif
