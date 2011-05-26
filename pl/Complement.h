#ifndef COMPLEMENT_H
#define COMPLEMENT_H

#include <string>

#include "WFF.h"

namespace pl
{

class Complement : public WFF
{
public:
	Complement(WFF *alpha);

	virtual std::string toString();

private:
	WFF *alpha;
};

}

#endif // COMPLEMENT_H
