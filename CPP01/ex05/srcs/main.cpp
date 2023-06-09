/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:00:48 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/07 07:57:02 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{

	if (ac != 2){
		std::cout << "Wrong usage: ./harl2.0 <level>" << std::endl;
		return (1);
	}
	
	Harl Harl;
	std::string level = av[1];
	Harl.complain(level);
	return (0);
}