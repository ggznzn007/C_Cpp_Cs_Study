//2. 학생 구조체를 작성합니다
//구조체는 이름, 나이, 키, 몸무게, 번호 로 이루어져있습니다
//학생 5명의 정보를 입력받고
//모두 출력하세요
//반드시 함수로 작성하고, 함수의 매개변수는 포인터를 통해 전달해야 합니다
#include<iostream>

using namespace std;

struct Student
{
	char name[20];
	int age[10];
	float height[10];
	float weight[10];
	int number[10];
};

void inputStudent(Student& st)
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "input your name : ";
		cin >> st.name;
		cout << "input your age : ";
		cin >> st.age[20];
		cout << "input your height : ";
		cin >> st.height[20];
		cout << "input your weight : ";
		cin >> st.weight[20];
		cout << "input your number : ";
		cin >> st.number[20];
	}


}

void showStudent(Student& st)
{
	for (int i = 1; i <= 5; i++)
	{
		cout << "name : " << st.name << endl;
		cout << "age : " << st.age << endl;
		cout << "height : " << st.height << endl;
		cout << "weight : " << st.weight << endl;
		cout << "number : " << st.number << endl;
	}
	
}

void main()
{
	Student st;
	inputStudent(st);
	cout << endl;
	showStudent(st);

}