#include "IntArray.h"

IntArray::IntArray(int arrSize)
{
	this->arr = new int[arrSize]();
	this->arrSize = arrSize;
}
IntArray::~IntArray()
{
	delete[] this->arr;
}
bool IntArray::setInt(int idx, int value)
{
	if (idx < 0 || idx >= this->arrSize)
		return false;
	this->arr[idx] = value;
	return true;
}
bool IntArray::getInt(int idx, int& value)
{
	if (idx < 0 || idx >= this->arrSize)
		return false;
	value = this->arr[idx];
	return true;
}
