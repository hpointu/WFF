#include <iostream>

#include "pl.h"

using namespace pl;

int main(int , char **)
{

	WFF *a = new Symbol("A");
	WFF *b = new Symbol("B");
	WFF *c = new Symbol("C");

	WFF *mafbf = new Implication( new OR( a , b ) , new Complement(c) );

	std::cout << mafbf->toString() << std::endl;

	return 0;
}
