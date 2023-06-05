/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:59:22 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/05 07:41:25 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	fluchten("fluchten");
	Zombie	*cortiz = newZombie("Cortiz");
	randomChump("Marwane");
	delete cortiz;
	return (0);
}