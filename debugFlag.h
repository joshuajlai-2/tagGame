// Simple Object to hold debug flag.

#ifndef debugFlag_H
#define debugFlag_H

namespace tagGame
{
	class Debf
	{
	public:
		Debf();
		Debf(Debf const& a);
		Debf& operator= (Debf const& a);
		tgReal isDon(0);
		inline tgReal retD();
		inline void setD();
	};

	tgReal debugFlag::retD()
	{ 
		return isDon;
	}

	void debugFlag::setD()
	{
		isDon = 1;
	}
}
