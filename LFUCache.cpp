#include <iostream>
using std::cout;
using std::endl;
#include "LFUCache.h"

LFUCache::LFUCache(int size)
{
	setSize(size);
	frequency = new int[size];
}

void LFUCache::addItem(int item)
{
	//If the item is not in the Cache 
	if (getIndexOfItem(item) == -1)
	{
		//If the Cache is full
		if (numItem == size)
		{
			int indexOfLowestFrequency = 0;
			int lowest = frequency[0];
			for (int i = 1; i < numItem; i++)
			{
				if (lowest > frequency[i])
				{
					lowest = frequency[i];
					indexOfLowestFrequency = i;
				}
			}
			int temp;
			int tempFrequency;
			for (int i = indexOfLowestFrequency - 1; i >= 0; i--)
			{
				temp = dataCache[i];
				dataCache[i + 1] = temp;
				tempFrequency = frequency[i];
				frequency[i + 1] = tempFrequency;
			}
			dataCache[0] = item;
			frequency[0] = 1;
		}
		//Else- if it is not full
		else
		{
			int temp;
			int tempFrequency;
			for (int i = numItem; i > 0; i--)
			{
				temp = dataCache[i - 1];
				dataCache[i] = temp;
				tempFrequency = frequency[i - 1];
				frequency[i] = tempFrequency;
			}
			dataCache[0] = item;
			frequency[0] = 1;
			numItem++;
		}
	}
	//Else - if the item is in the Cache
	else 
	{
		int index = getIndexOfItem(item);
		frequency[index] += 1;
	}
}

int LFUCache::getIndexOfItem(int item)
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

void LFUCache::printItems()
{
	cout << "Items in Cache : ";
	for (int i = 0; i < numItem; i++)
	{
		cout << dataCache[i] << " ";
	}
	cout << endl;
	cout << "Frequency in Cache : ";
	for (int i = 0; i < numItem; i++)
	{
		cout << frequency[i] << " ";
	}
	cout << endl;
}