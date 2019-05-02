/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 05:57:35 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 23:05:09 by qpeng            ###   ########.fr       */
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

void ponyOnTheHeap();
void ponyOnTheStack();

#endif
