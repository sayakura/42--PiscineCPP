/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:40:30 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 17:54:25 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PLASMARIFLE_HPP
#define FT_PLASMARIFLE_HPP

#include "AWeapon.hpp"
#include <iostream>

class PlasmaRifle : virtual public AWeapon
{
private:
	/* data */
public:
	PlasmaRifle(void);
	~PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const &rhs);
	PlasmaRifle &operator=(PlasmaRifle const &rhs);

	void attack(void) const;
};

#endif 
