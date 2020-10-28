/* 처음에 5개의 int배열공간을 할당하고
  꽉차면 다시 계속 +5씩 늘려나간다
*/
#include <iostream>

#define ALLOC_SIZE	5

using namespace std;

void copyArray(int dest[], int src[], int len)
{
	for (int i = 0; i < len; i++)
		dest[i] = src[i];
}

void main()
{
	int allocSize = ALLOC_SIZE;		// 힙에 할당 크기
	int* arr = NULL;
	arr = new int[allocSize];	// 동적배열
	int cnt = 0;	// 입력 개수

	while (1)
	{
		cout << "숫자 입력: ";
		int num = 0;
		cin >> num;
		arr[cnt] = num;
		cnt++;
		// 저장개수가 할당크기와 동일하면
		// 남는 공간이 없다
		// => 공간을 +5 증가
		if (cnt == allocSize)
		{
			cout << "Memory Full !!!" << endl;
			cout << "Add Alloc. OK?(yes/no) : ";
			string answer;
			cin >> answer;
			if (answer == "yes" || answer == "y" ||
				answer == "Y" || answer == "Yes")
			{
				// 1) 새로운 공간을 +5크기로 할당
				allocSize += ALLOC_SIZE;
				int* tempArr = new int[allocSize];
					// 2) 기존의 배열을 새공간에 복사
				copyArray(tempArr, arr, allocSize - ALLOC_SIZE);
				//memcpy(tempArr, arr, 
				//	sizeof(int) * (allocSize - ALLOC_SIZE));
					// 3) 기존 힙 할당공간을 해제
				delete[] arr;
					// 4) 새공간의 포인터주소를
					//    기존 포인터에 복사
				arr = tempArr;
			}
			else
			{
				cout << "<모든 입력 숫자 출력>" << endl;
				for (int i = 0; i < cnt; i++)
					cout << arr[i] << " ";
				cout << endl;

				delete[] arr;
				break;
			}
		}
	}
}