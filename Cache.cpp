#include <iostream>
using std::cout;
using std::endl;
#include "Cache.h"

void Cache::setSize(int someSize)
{
	dataCache = new int[someSize];
	size = someSize;
	numItem = 0;
}

int Cache::getItemAtFront()
{
	return dataCache[0];
}

