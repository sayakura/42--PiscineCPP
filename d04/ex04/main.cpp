/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qpeng <qpeng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 18:03:13 by qpeng             #+#    #+#             */
/*   Updated: 2019/05/04 18:03:13 by qpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "IMiningLaser.hpp"
#include "StripMiner.hpp"
#include "IAsteroid.hpp"
#include <iostream>

int main()
{
	AsteroBocal ab;
	BocalSteroid bs;
	IMiningLaser *dcm = new DeepCoreMiner(), *sm = new StripMiner();
	MiningBarge mb;
	mb.equip(dcm);
	mb.equip(sm);
	mb.equip(sm);
	mb.equip(dcm);
	mb.equip(sm);
	mb.mine(&ab);
	mb.mine(&bs);
	return 0;
}
