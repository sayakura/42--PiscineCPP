/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 17:05:24 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/02 22:34:39 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

#define FIXED_HPP

class Fixed 
{
    private:
        int             _floatPointValue;
        static int      _fractionalBits;
    public:
        Fixed(void);
        Fixed(Fixed const&);
        Fixed& operator = (Fixed const &);      
        ~Fixed(void);

        int     getRawBits(void) const;
        void    setRawBits(int const);
};

#endif