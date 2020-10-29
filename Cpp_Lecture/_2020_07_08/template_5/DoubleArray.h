#pragma once
class DoubleArray
{
private:
	double* arr;	// 동적 배열시작주소
	int arrSize;	// 배열의 할당 크기
public:
	DoubleArray(int arrSize = 100);
	~DoubleArray();
	bool setDouble(int idx, double value);
	bool getDouble(int idx, double& value);
};

