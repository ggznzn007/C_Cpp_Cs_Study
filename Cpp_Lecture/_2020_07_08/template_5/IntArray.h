#pragma once
class IntArray
{
private:
	int* arr;	// 동적 배열시작주소
	int arrSize;// 배열의 할당 크기
public:
	IntArray(int arrSize = 100);
	~IntArray();
	bool setInt(int idx, int value);
	bool getInt(int idx, int& value);
};

