/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:05:24 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/02 22:04:27 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP
#include <iostream>

class Fixed 
{
    private:
        int                 _floatPointValue;
        static int          _fractionalBits;
    public:
        Fixed(void);
        Fixed(Fixed const&);
        Fixed(int const);
        Fixed(float const);   
        ~Fixed(void);
        Fixed& operator=(Fixed const&);   
        bool   operator>(Fixed const&) const; 
        bool   operator<(Fixed const&) const;   
        bool   operator>=(Fixed const&) const;
        bool   operator<=(Fixed const&) const;  
        bool   operator==(Fixed const&) const;
        bool   operator!=(Fixed const&) const;  
        Fixed  operator+(Fixed const&) const;
        Fixed  operator-(Fixed const&) const;
        Fixed  operator*(Fixed const&) const;
        Fixed  operator/(Fixed const&) const;
        Fixed& operator++(void);
        Fixed  operator++(int);
        Fixed& operator--(void);
        Fixed  operator--(int);
        
        int    getRawBits(void) const;
        void   setRawBits(int const);
        float  toFloat(void) const;
        int    toInt(void) const;

        static Fixed&          max(Fixed &a, Fixed &b);
        static Fixed&          min(Fixed &a, Fixed &b);
        static Fixed const&	   max(Fixed const &a, Fixed const &b); 
        static Fixed const&	   min(Fixed const &a, Fixed const &b);
};

std::ostream& operator << (std::ostream &, Fixed const&);   

/* non member way of doing it.
Fixed&          max(Fixed &a, Fixed &b);
Fixed&          min(Fixed &a, Fixed &b);
Fixed const&	min(Fixed const&a, Fixed const&b);
Fixed const&	max(Fixed const&a, Fixed const&b); 
*/
#endif