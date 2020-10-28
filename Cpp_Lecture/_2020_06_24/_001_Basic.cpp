#include<iostream>
#include<iomanip>

using namespace std;

//void main()//Cout and Cin examples
//{
//	int n1, n2, s;
//	cout << "Enter First  Num : ";
//	cin >> n1;
//	cout << "Enter Second Num : ";
//	cin >> n2;
//
//	s = n1 + n2;
//
//	cout << "\n Sum = ";
//	cout << s;
//	cout << "\n";
//
//}

//void main() // Cascading Insertion and Extraction operator
//{
//	int num1, num2, sum;
//	cout << "\n Enter Two Numbers ::: ";
//	cin >> num1 >> num2;
//
//	sum = num1 + num2;
//	cout << "\n" << num1 << "+" << num2 << "=" << sum;
//	cout << "\n";
//}

//void main() //Multiple line and Single line comment
//{
//	float r, h;
//	cout << " Enter Radius & Height of Cylinder ::: ";
//	cin >> r >> h;
//
//	float v = 3.14 * r * r * h;
//	cout << "\n Volume of Cylinder = " << v << '\n';
//}

//void main()// Use of Endl example
//{
//	int a = 12, b = 123, c = 1234;
//	cout << "Numbers : " << endl;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}

//void main() // using setw() example 
//{
//	cout << setw(10) << "Patel" << endl;
//	cout << setw(10) << "Rutul Nils";
//	//#include<iomanip>에 포함되어 있음.
//	//출력하는 데이터의 칸을 지정한 수 만큼 정렬 시켜 줌.
//}

//void main()//Swap Two numbers 
//{
//	int n1, n2, t;
//	cout << "\n Enter Two Numbers ::: ";
//	cin >> n1 >> n2;
//
//	cout << "\n n1 = " << n1 << ", n2 = " << n2;
//
//	t = n1;
//	n1 = n2;
//	n2 = t;
//
//	cout << "\n n1 = " << n1 << ", n2 = " << n2;
//}

//void main() // Swap Two nubers without third
//{
//	int a, b;
//	cout << "Enter the value of a and b:" << endl;
//	cin >> a >> b;
//	cout << "Before Swap:\n" << "A:" << a << "\nB:" << b << endl;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	cout << "After Swap:\n" << "A:" << a << "\nB:" << b << endl;
//}

class Distance// class declaration & definition
{
private:
	int feet;
	float inches;
public:
	Distance()
	{
		feet = 0;
		inches = 0.0;
	}
	Distance(int ft, float in)
	{
		feet = ft;
		inches = in;
	}
	void getDist();
	void showDist();
	void addDist(Distance, Distance);
};
// Members Function Definition
void Distance::getDist()
{
	cout << "Enter Feet & Inches : ";
	cin >> feet >> inches;
}
void Distance::showDist()
{
	cout << feet << "\'_" << inches << "\"";
}
void Distance::addDist(Distance dd1, Distance dd2)
{
	feet = dd1.feet + dd2.feet;
	inches = dd1.inches + dd2.inches;
	if (inches -= 12.0)
	{
		inches -= 12.0;
		feet++;
	}
}
// Global Declaration & Definition Section
void main()
{
	Distance d1;
	Distance d2(10,6.0);
	Distance d3;
	d1.getDist();

	d1.showDist();
	cout << " + ";
	d2.showDist();
	cout << " = ";

	d3.addDist(d1, d2);
	d3.showDist();

}