/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kura <Kura@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 05:57:38 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 06:34:53 by Kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony *ponyA = new Pony("seli", RED, 100.0);
    ponyA->run();
    ponyA->dance();
    ponyA->introduce();
    delete ponyA;
}

void ponyOnTheStack(void)
{
    Pony ponyA = Pony("seli.2", GREEN, 120.0);
    ponyA.run();
    ponyA.dance();
    ponyA.introduce();
}

int  main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}