#pragma once

#include <iostream>
using namespace std;

class Human
{
protected:
	string name;
	int age;

public:
	Human(string name = "»ç¶÷", int age = 0);
	~Human();

public:
	void eat();
	void sleep();
	void work();
	void info();
};

