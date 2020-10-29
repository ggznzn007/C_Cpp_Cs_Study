#include <iostream>
#include "IntArray.h"
#include "DoubleArray.h"

using namespace std;

void usingIntArray() 
{
	const int ARR_LEN = 20;
	IntArray intArr(ARR_LEN);

	for (int i = 0; i < ARR_LEN; i++)
		intArr.setInt(i, i * 2);

	for (int i = 0; i < ARR_LEN; i++) {
		int value = 0;
		intArr.getInt(i, value);
		cout << value << ", ";
	}
	cout << endl;
}

void usingDoubleArray()
{
	const int ARR_LEN = 20;
	DoubleArray doubleArr(ARR_LEN);

	for (int i = 0; i < ARR_LEN; i++)
		doubleArr.setDouble(i, i * 2.1);

	for (int i = 0; i < ARR_LEN; i++) {
		double value = 0;
		doubleArr.getDouble(i, value);
		cout << value << ", ";
	}
	cout << endl;
}

void main()
{
	usingIntArray();
	usingDoubleArray();
}
