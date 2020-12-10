#pragma once
#include <iostream>
#ifndef CACHE_H
#define CACHE_H


class Cache
{
protected:
	int size;
	int numItem;
	int *dataCache;
	void setSize(int someSize);
public:
	virtual void addItem(int item) = 0;
	virtual int getIndexOfItem(int item) = 0;
	virtual void printItems() = 0;
	int getItemAtFront();
};


#endif