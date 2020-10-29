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

