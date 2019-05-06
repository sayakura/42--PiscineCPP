/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:20 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:54:49 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ENEMY_HPP
#define FT_ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
private:
	int hp;
	std::string type;

public:
	Enemy(int hp, std::string const &type);
	virtual ~Enemy(void);
	Enemy(Enemy const &rhs);
	Enemy &operator=(Enemy const &rhs);

	std::string getType(void) const;
	int getHP(void) const;
	virtual void takeDamage(int);
};

#endif
