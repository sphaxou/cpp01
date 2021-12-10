/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgallois <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 02:45:59 by vgallois          #+#    #+#             */
/*   Updated: 2021/12/10 03:11:59 by vgallois         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include <string>
class Karen
{
	public:
		void complain(const std::string &level);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

using fun=void (Karen::*)(void);
typedef	struct s_funtab
{
	fun	f;
	std::string	level;
} t_funtab;

#endif
