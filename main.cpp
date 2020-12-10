#include <iostream>
#include <string>
#include <cmath>
#include "Cache.h"
#include "LRUCache.h"
#include "LFUCache.h"

using namespace std;

int main()
{
	//LRU Cache with five elements 
	Cache* myLRUCache = new LRUCache(5);
	myLRUCache->addItem(5);
	myLRUCache->addItem(4);
	myLRUCache->addItem(3);
	myLRUCache->addItem(2);
	myLRUCache->addItem(1);
	myLRUCache->printItems();
	myLRUCache->addItem(6);
	myLRUCache->printItems();
	myLRUCache->addItem(3);
	myLRUCache->printItems();
	//LRU Cache with ten elements 
	Cache* myLRUCacheTwo = new LRUCache(10);
	myLRUCacheTwo->addItem(10);
	myLRUCacheTwo->addItem(9);
	myLRUCacheTwo->addItem(8);
	myLRUCacheTwo->addItem(7);
	myLRUCacheTwo->addItem(6);
	myLRUCacheTwo->addItem(5);
	myLRUCacheTwo->addItem(4);
	myLRUCacheTwo->addItem(3);
	myLRUCacheTwo->addItem(2);
	myLRUCacheTwo->addItem(1);
	myLRUCacheTwo->printItems();
	myLRUCacheTwo->addItem(50);
	myLRUCacheTwo->printItems();
	myLRUCacheTwo->addItem(7);
	myLRUCacheTwo->printItems();
	
	//LFU Cache with five elements
	Cache* myLFUCache = new LFUCache(5);
	myLFUCache->addItem(5);
	myLFUCache->addItem(4);
	myLFUCache->addItem(3);
	myLFUCache->addItem(2);
	myLFUCache->addItem(1);
	myLFUCache->printItems();
	cout << endl;
	myLFUCache->addItem(5);
	myLFUCache->addItem(3);
	myLFUCache->addItem(2);
	myLFUCache->addItem(1);
	myLFUCache->printItems();
	cout << endl;
	myLFUCache->addItem(6);
	myLFUCache->printItems();
	//LFU Cache with seven elements
	Cache* myLFUCacheTwo = new LFUCache(7);
	myLFUCacheTwo->addItem(14);
	myLFUCacheTwo->addItem(12);
	myLFUCacheTwo->addItem(10);
	myLFUCacheTwo->addItem(8);
	myLFUCacheTwo->addItem(6);
	myLFUCacheTwo->addItem(4);
	myLFUCacheTwo->addItem(2);
	myLFUCacheTwo->printItems();
	cout << endl;
	myLFUCacheTwo->addItem(14);
	myLFUCacheTwo->addItem(10);
	myLFUCacheTwo->addItem(6);
	myLFUCacheTwo->printItems();
	cout << endl;
	myLFUCacheTwo->addItem(225);
	myLFUCacheTwo->printItems();
}