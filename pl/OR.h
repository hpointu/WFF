#ifndef OR_H
#define OR_H

#include <string>

#include "WFF.h"

namespace pl
{

class OR : public WFF
{
public:
	OR(WFF *alpha, WFF *beta);

	virtual std::string toString();

private:
	WFF *alpha, *beta;
};

}
#endif // OR_H
