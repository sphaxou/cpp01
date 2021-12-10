/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:19:02 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 01:32:32 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <string>
class HumanA
{
	public:
		HumanA(const std::string &name, const Weapon &weapon);
		void	attack() const;

	private:
		std::string _name;
		const Weapon	&_weapon;
};
#endif
