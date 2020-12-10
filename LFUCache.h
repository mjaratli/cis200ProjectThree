#pragma once
#include <iostream>
#ifndef LFUCACHE_H
#define LFUCACHE_H
#include "Cache.h"

class LFUCache : public Cache
{
public:
	LFUCache(int size);
	void addItem(int item);
	int getIndexOfItem(int item);
	void printItems();
private:
	int* frequency;
};


#endif
