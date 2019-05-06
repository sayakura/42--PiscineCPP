#include "KoalaSteroid.hpp"

BocalSteroid::BocalSteroid()
{
}

BocalSteroid::~BocalSteroid()
{
}

BocalSteroid::BocalSteroid(BocalSteroid const &rhs)
{
	*this = rhs;
}

BocalSteroid &BocalSteroid::operator=(BocalSteroid const &)
{
	return *this;
}

std::string BocalSteroid::beMined(StripMiner *) const
{
	return "Krpite";
}
std::string BocalSteroid::beMined(DeepCoreMiner *) const
{
	return "Zazium";
}

std::string BocalSteroid::getName() const
{
	return "BocalSteroid";
}
