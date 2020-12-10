#include <iostream>
using std::cout;
using std::endl;
#include "LRUCache.h"

LRUCache::LRUCache(int size)
{
	setSize(size);
}

void LRUCache::addItem(int item)
{
	//If the item is not in the Cache 
	if (getIndexOfItem(item) == -1)
	{
		//If the Cache is full
		if (size == numItem)
		{
			int temp;
			for (int i = numItem - 2; i >= 0; i--)
			{
				temp = dataCache[i];
				dataCache[i + 1] = temp;
			}
			dataCache[0] = item;
		}
		//Else - if it is not full
		else 
		{
			int temp;
			for (int i = numItem; i > 0; i--)
			{
				temp = dataCache[i-1];
				dataCache[i] = temp;
			}
			dataCache[0] = item;
			numItem++;
		}	
	}
	//Else - if the item is in the Cache
	else
	{
		//If the Cache is full
		if (size == numItem)
		{
			int temp;
			for (int i = getIndexOfItem(item) - 1; i >= 0; i--)
			{
				temp = dataCache[i];
				dataCache[i + 1] = temp;
			}
			dataCache[0] = item;
		}
		//Else - if it is not full
		else
		{
			int temp;
			for (int i = getIndexOfItem(item); i > 0; i--)
			{
				temp = dataCache[i - 1];
				dataCache[i] = temp;
			}
			dataCache[0] = item;
		}
	}
}

int LRUCache::getIndexOfItem(int item)
{
	for (int i = 0; i < numItem; i++)
	{
		if (dataCache[i] == item)
		{
			return i;
		}
	}
	return -1;
}

void LRUCache::printItems()
{
	cout << "Items in Cache : ";
	for (int i = 0; i < numItem; i++)
	{
		cout << dataCache[i] << " ";
	}
	cout << endl;
}

