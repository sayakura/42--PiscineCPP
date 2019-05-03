/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:25:46 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/02 22:36:31 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _floatPointValue(0)\
    { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(Fixed const& rdi) : _floatPointValue(rdi.getRawBits())\
    { std::cout << "Copy constructor called" << std::endl; }
    
Fixed::~Fixed(void)\
    { std::cout << "Destructor called" << std::endl; }

Fixed&  Fixed::operator=(const Fixed& rh)
{
    std::cout << "Assignation operator called" << std::endl;
    _floatPointValue = rh.getRawBits();
    return *this;
}

int     Fixed::getRawBits(void) const
{  
	std::cout << "getRawBits member function called" << std::endl;
    return _floatPointValue;
}
void    Fixed::setRawBits(int const raw) { _floatPointValue = raw; }