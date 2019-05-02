/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 05:57:38 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 23:05:24 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

// void ponyOnTheHeap(void)
// {
//     Pony *ponyA = new Pony("seli", RED, 100.0);
//     ponyA->run();
//     ponyA->dance();
//     ponyA->introduce();
//     delete ponyA;
// }

// void ponyOnTheStack(void)
// {
//     Pony ponyA = Pony("seli.2", GREEN, 120.0);
//     ponyA.run();
//     ponyA.dance();
//     ponyA.introduce();
// }

int  main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}