#pragma once
#include "Person.h"
#include <iostream>
#include <string.h>
using namespace std;
class Student : virtual public Person
{
protected:
	float average;//����� ������
	int days;//subtraction days of the year
	int num_of_courses;//���� ������� ��� ������

public:
	Student(char* name, long id, float average, int num_of_courses , int days);
	Student(const Student& s);
	virtual ~Student();
	virtual void print()const;
	const char* get_type()const { return "Student"; }
	virtual float get_average() { return average; }
};