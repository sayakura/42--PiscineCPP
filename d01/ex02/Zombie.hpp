/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 19:12:07 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/01 19:28:37 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie {
	public: 
		std::string 	name;
		std::string		type;
		Zombie(std::string, std::string); 
		~Zombie(void);

		void announce(void);
};
#endif
