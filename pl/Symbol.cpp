#include "Symbol.h"

pl::Symbol::Symbol(std::string representation) :
	representation(representation)
{
}

std::string pl::Symbol::toString()
{
	return representation;
}

