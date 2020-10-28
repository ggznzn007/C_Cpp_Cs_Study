#include <iostream>

#define NUM_LEN		10

using namespace std;

void main()
{
	// int배열 10개를 동적할당 후 2의 배수 저장
	int* pnum = (int*)malloc(sizeof(int) * NUM_LEN);
	for (int i = 0; i < NUM_LEN; i++)
	{
		pnum[i] = i * 2;
		cout << pnum[i] << " ";
	}
	cout << endl;
	free(pnum);


	pnum = new int[NUM_LEN];	// malloc
	//pnum = new int[NUM_LEN]();	// calloc
	for (int i = 0; i < NUM_LEN; i++)
	{
		pnum[i] = i * 2;
		cout << pnum[i] << " ";
	}
	cout << endl;
	delete[] pnum;
}