/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:57:45 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/22 11:56:51 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "ICharacter.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &rhs);
		Ice &operator=(const Ice &rhs);
		~Ice(void);

		virtual AMateria *clone(void) const;
		virtual void use(ICharacter &target);
};

#endif