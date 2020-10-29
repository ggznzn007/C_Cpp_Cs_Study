#pragma once

template<typename T>
class DataArray
{
private:
	T* arr;	// 동적 배열시작주소
	int arrSize;// 배열의 할당 크기
public:
	DataArray(int arrSize = 100);
	~DataArray();
	bool setData(int idx, T value);
	bool getData(int idx, T& value);
};


template<typename T>
DataArray<T>::DataArray(int arrSize)
{
	this->arr = new T[arrSize]();
	this->arrSize = arrSize;
}
template<typename T>
DataArray<T>::~DataArray()
{
	delete[] this->arr;
}
template<typename T>
bool DataArray<T>::setData(int idx, T value)
{
	if (idx < 0 || idx >= this->arrSize)
		return false;
	this->arr[idx] = value;
	return true;
}
template<typename T>
bool DataArray<T>::getData(int idx, T& value)
{
	if (idx < 0 || idx >= this->arrSize)
		return false;
	value = this->arr[idx];
	return true;
}

