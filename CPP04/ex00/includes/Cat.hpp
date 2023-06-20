/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:50:55 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/19 11:29:08 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

public:
	Cat(void);
	Cat(const Cat &rhs);
	Cat &operator=(const Cat &rhs);
	~Cat(void);

	virtual void makeSound(void) const;
private:
	
};

#endif