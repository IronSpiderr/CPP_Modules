/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgomes-d <mgomes-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:16:31 by mgomes-d          #+#    #+#             */
/*   Updated: 2023/06/09 11:11:37 by mgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{

public:
	Fixed(void);
	Fixed(const Fixed &rhs);
	Fixed &operator=(const Fixed &rhs);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed(void);

private:
	int				 _fixedPoint;
	static const int _bits = 8;
};

#endif