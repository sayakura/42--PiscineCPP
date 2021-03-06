/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 07:18:56 by Kura              #+#    #+#             */
/*   Updated: 2019/05/01 23:27:23 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CPP

#define HUMAN_CPP
#include <iostream>
#include <string>
class Human
{
    private:
        void meleeAttack(std::string const & target);
        void rangedAttack(std::string const & target);
        void intimidatingShout(std::string const & target);
    public:
        void action(std::string const &action_name, std::string const &target);
        Human();
        ~Human();
};

#endif