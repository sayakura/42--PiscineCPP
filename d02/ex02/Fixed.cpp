/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:25:46 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/02 22:36:04 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) : _floatPointValue(0)\
                 { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(int const rdi) : _floatPointValue(rdi << _fractionalBits)\
                { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed(float rdi) : _floatPointValue(roundf(rdi * (1 << _fractionalBits)))\
                { std::cout << "Float constructor called" << std::endl; }

Fixed::Fixed(Fixed const& rdi) : _floatPointValue(rdi.getRawBits())\
                { std::cout << "Copy constructor called" << std::endl; }
                
Fixed::~Fixed(void)\
                { std::cout << "Destructor called" << std::endl; }

int    Fixed::getRawBits(void) const { return _floatPointValue; }
void   Fixed::setRawBits(int const rdi) { _floatPointValue = rdi; }
float  Fixed::toFloat(void) const { return (float)_floatPointValue / (1 << _fractionalBits); }
int    Fixed::toInt(void) const { return _floatPointValue >> _fractionalBits; }

Fixed&  Fixed::operator=(Fixed const& rdi)
{
    std::cout << "Assignation operator called" << std::endl;
    _floatPointValue = rdi.getRawBits();
    return *this;
}

bool  Fixed::operator>(Fixed const& rdi) const { return _fractionalBits > rdi.getRawBits(); }
bool  Fixed::operator<(Fixed const& rdi) const { return _fractionalBits < rdi.getRawBits(); }   
bool  Fixed::operator>=(Fixed const& rdi) const { return _fractionalBits >= rdi.getRawBits(); }
bool  Fixed::operator<=(Fixed const& rdi) const { return _fractionalBits <= rdi.getRawBits(); }  
bool  Fixed::operator==(Fixed const& rdi) const { return _fractionalBits == rdi.getRawBits(); }
bool  Fixed::operator!=(Fixed const& rdi) const { return _fractionalBits != rdi.getRawBits(); }  
Fixed Fixed::operator+(Fixed const& rdi) const { return this->toFloat() + rdi.toFloat(); }
Fixed Fixed::operator-(Fixed const& rdi) const { return this->toFloat() - rdi.toFloat(); }
Fixed Fixed::operator*(Fixed const& rdi) const { return this->toFloat() * rdi.toFloat(); }
Fixed Fixed::operator/(Fixed const& rdi) const { return this->toFloat() / rdi.toFloat(); }

Fixed&   Fixed::operator++(void)
{
    _floatPointValue++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed&  Fixed::operator--(void)
{
	_floatPointValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
	return tmp;
}

std::ostream& operator<<(std::ostream &rdi, Fixed const& rsi)
{
    rdi << rsi.toFloat();
    return rdi;
}

Fixed&          Fixed::max(Fixed &a, Fixed &b) { return a > b ? a : b; }
Fixed&          Fixed::min(Fixed &a, Fixed &b) { return a > b ? b : a; }
Fixed const&	Fixed::max(Fixed const& a, Fixed const& b)	{ return (a > b ? a : b); }
Fixed const&	Fixed::min(Fixed const& a, Fixed const& b)	{ return (a < b ? a : b); }