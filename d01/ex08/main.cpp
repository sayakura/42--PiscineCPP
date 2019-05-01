/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Kura <Kura@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:39:28 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 07:41:20 by Kura             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int     main(void)
{
    Human hm;
    hm.action("meleeAttack", "seli");
    hm.action("rangedAttack", "seli");
    hm.action("intimidatingShout", "seli");
    return (0);
}