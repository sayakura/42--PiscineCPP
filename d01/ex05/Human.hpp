/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:16:55 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:16:56 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELI_HUMAN_HPP
#define SELI_HUMAN_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include "Brain.hpp"

class Human
{
private:
	Brain b;

public:
	Human();
	~Human();
	std::string identify() const;
	const Brain &getBrain() const;
};

#endif
