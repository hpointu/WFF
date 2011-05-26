#include "Implication.h"

pl::Implication::Implication(WFF *alpha, WFF *beta) :
	alpha(alpha),
	beta(beta)

{
}


std::string pl::Implication::toString()
{
	return "( " + alpha->toString() + " -> " + beta->toString() + " )";
}
