/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kura <Kura@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 05:57:35 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 06:26:04 by Kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP

#define PONY_HPP
#include <iostream>

enum PonyColor
{
    RED,
    GREEN,
    YELLOW
};

class Pony
{
    private:
        std::string _name;
        int         _color;
        double      _height;
    public:
        Pony(std::string, int, double);
        ~Pony(void);
        void run(void);
        void dance(void);
        void introduce(void);
};

#endif
