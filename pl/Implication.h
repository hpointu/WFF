#ifndef IMPLICATION_H
#define IMPLICATION_H

#include <string>

#include "WFF.h"

namespace pl
{

class Implication : public WFF
{
public:
	Implication(WFF *alpha, WFF *beta);

	virtual std::string toString();

private:
	WFF *alpha, *beta;
};

}

#endif // IMPLICATION_H
