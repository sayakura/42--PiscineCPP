/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 23:16:34 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 23:16:35 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SELI_BRAIN_HPP
#define SELI_BRAIN_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Brain
{
private:
	int powerlever;

public:
	Brain();
	~Brain();
	std::string identify() const;
};

#endif
