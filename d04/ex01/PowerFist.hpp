/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:37 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:54:35 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POWERFIST_HPP
#define FT_POWERFIST_HPP

#include "AWeapon.hpp"
#include <iostream>

class PowerFist : virtual public AWeapon
{
private:
	/* data */
public:
	PowerFist(void);
	~PowerFist(void);
	PowerFist(PowerFist const &rhs);
	PowerFist &operator=(PowerFist const &rhs);

	void attack(void) const;
};

#endif 
