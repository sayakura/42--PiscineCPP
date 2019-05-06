#ifndef FT_KOALASTEROID_HPP
#define FT_KOALASTEROID_HPP

#include <string>
#include "IAsteroid.hpp"

class BocalSteroid : virtual public IAsteroid
{
private:
	/* data */
public:
	BocalSteroid();
	~BocalSteroid();
	BocalSteroid(BocalSteroid const &rhs);
	BocalSteroid &operator=(BocalSteroid const &rhs);

	std::string beMined(StripMiner *) const;
	std::string beMined(DeepCoreMiner *) const;
	std::string getName() const;
};

#endif /* FT_KoalaSteroid_HPP */
