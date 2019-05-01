/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kura <Kura@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 05:57:29 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 06:34:38 by Kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int color,  double height)
{
    _name = "🐴  " + name;
    _color = color;
    _height = height;
    std::cout << _name + " is borned! " << std::endl;
}

Pony::~Pony(void)
{
    std::cout << _name + " is gg! " << std::endl;
}

void Pony::run(void)
{
    std::cout << _name + " is running hella fast! " << std::endl;
}

void Pony::dance(void)
{
    std::cout << _name + " is dancing like a 🎠" << std::endl;
}

void Pony::introduce(void)
{
    std::cout << "Hi, my name is " + _name << std::endl
                << "My color is ";
    switch (_color)
    {
        case RED: 
            std::cout << "RED";
            break;
        case GREEN:
            std::cout << "GREEN";
            break;
        case YELLOW:
            std::cout << "YELLOW";
            break ;
        default:
            std::cout << ":)";
            break;
    }
    std::cout << std::endl << "And my height is " << _height <<  std::endl;
}