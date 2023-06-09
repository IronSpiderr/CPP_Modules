/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:42:11 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/05 07:43:06 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Default")
{
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << this->_name << " is created" << std::endl;
	return ;
}
Zombie::~Zombie(void)
{
	std::cout << "destructor's " << this->_name << " has been called" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}