#pragma once
#include <iostream>
#ifndef LRUCACHE_H
#define LRUCACHE_H
#include "Cache.h"

class LRUCache : public Cache
{
public:
	LRUCache(int size);
	void addItem(int item);
	int getIndexOfItem(int item);
	void printItems();
};


#endif
