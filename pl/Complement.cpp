#include "Complement.h"

pl::Complement::Complement(WFF *alpha) :
	alpha(alpha)
{
}


std::string pl::Complement::toString()
{
	return "~" + alpha->toString();
}
