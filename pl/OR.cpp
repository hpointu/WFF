#include "OR.h"

pl::OR::OR(WFF *alpha, WFF *beta) :
	alpha(alpha),
	beta(beta)
{
}


std::string pl::OR::toString()
{
	return "( " + alpha->toString() + " v " + beta->toString() + " )";
}
