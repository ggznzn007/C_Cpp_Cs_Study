#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


#define NAME_LEN		20
#define TEL_LEN			20
#define MAX_PERSON_NUM	100

class Person
{
private:
	char* name;
	char* phone;

public:
	Person();
	~Person();
public:
	// getter
	char* getName();
	// setter
	void setName(char* _name);

	char* getPhone();

	void setPhone(char* _phone);

	void showPerson();

};

void ShowMenu();
void InsertTelInfo(Person* par, int* pnum);
void DeleteTelInfo(Person* par, int* pnum);
void SearchTelInfo(Person* par, int num);
void PrintAll(Person* par, int num);
void ClearScreen();