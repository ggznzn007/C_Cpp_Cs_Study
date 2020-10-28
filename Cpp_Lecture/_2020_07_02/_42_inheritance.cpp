#include <iostream>

using namespace std;

class Animal
{
private:
	string name = "동물";
public:
	void breathe() {
		cout << "숨을 쉰다" << endl;
	}
	void sleep() {
		cout << "잠을 잔다" << endl;
	}
	void move() {
		cout << "움직인다" << endl;
	}
	string getName() {
		return this->name;
	}
};

class Mammals : public Animal
{
public:
	void drinkMilk() {
		cout << "우유를 마신다" << endl;
	}
};

class Tiger : public Mammals
{
};

class Lion : public Mammals
{
};

void main()
{
	Tiger tiger;
	Lion lion;

	cout << tiger.getName() << endl;
	tiger.breathe();
	tiger.move();
	tiger.sleep();
	tiger.drinkMilk();

	cout << endl;

	cout << lion.getName() << endl;
	lion.breathe();
	lion.move();
	lion.sleep();
	tiger.drinkMilk();
}