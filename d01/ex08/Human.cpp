/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:21:15 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 23:27:44 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(){};
Human::~Human(){};

void Human::meleeAttack(std::string const & target)
{
    std::cout << "meleeAttack " << target << std::endl;
}
void Human::rangedAttack(std::string const & target)
{
    std::cout << "rangedAttack " << target << std::endl;
}
void Human::intimidatingShout(std::string const & target)
{
    std::cout << "intimidatingShout " << target << std::endl;
}
void Human::action(std::string const & action_name, std::string const & target)
{
    static std::string commands[] = {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"
    };
    static void (Human::*ptr[])(std::string const &) = {
        &Human::meleeAttack,
        &Human::rangedAttack,
        &Human::intimidatingShout
    };
    size_t len = sizeof(commands) / sizeof(std::string);
    
    for (int i = 0; i < len; i++)
        if (action_name == commands[i])
        {
            (this->*ptr[i])(target);
            return ;
        }
}