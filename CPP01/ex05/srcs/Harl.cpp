/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:00:47 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/07 08:56:51 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	
}

Harl::~Harl(void)
{

}

void	Harl::complain(std::string level)
{
	std::string	options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functionPointer[4])(void) = {
            &Harl::debug,
            &Harl::info,
            &Harl::warning,
            &Harl::error
		};
	
	for (int i = 0; i < 4; i++){
		if (level.compare(options[i]) == 0){
			(this->*functionPointer[i])();
			break ;
		}
		
	}
	return ;
}

void	Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;

}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	return ;
}