#ifndef SYMBOL_H
#define SYMBOL_H

#include <string>

#include "WFF.h"

namespace pl
{

class Symbol : public WFF
{
public:
	Symbol(std::string representation);

	virtual std::string toString();

private:
	std::string representation;
};

}

#endif // SYMBOL_H
