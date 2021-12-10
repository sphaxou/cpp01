/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:12:45 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 01:18:49 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
# include <string>
class Weapon
{
	public:
		Weapon(const std::string &name);

		void				setType(const std::string &name);
		const std::string	&getType() const;

	private:
		std::string _type;
};

#endif
