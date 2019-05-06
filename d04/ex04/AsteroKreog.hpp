/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:02:41 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:02:42 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ASTEROKREOG_HPP
#define FT_ASTEROKREOG_HPP

#include <string>
#include "IAsteroid.hpp"

class AsteroBocal : virtual public IAsteroid
{
private:
	/* data */
public:
	AsteroBocal();
	~AsteroBocal();
	AsteroBocal(AsteroBocal const &rhs);
	AsteroBocal &operator=(AsteroBocal const &rhs);

	std::string beMined(StripMiner *) const;
	std::string beMined(DeepCoreMiner *) const;
	std::string getName() const;
};

#endif /* FT_AsteroKreog_HPP */
