/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:05:24 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/02 22:32:11 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP
#include <iostream>

class Fixed 
{
    private:
        int             _floatPointValue;
        static int      _fractionalBits;
    public:
        Fixed(void);
        Fixed(Fixed const&);
        Fixed(int const);
        Fixed(float const);   
        ~Fixed(void);
        Fixed& operator = (Fixed const&);   

        int     getRawBits(void) const;
        void    setRawBits(int const);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream& operator << (std::ostream &, const Fixed&);   
#endif