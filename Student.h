#pragma once
#include "Person.h"
#include<iostream> 
#include<string> 
#include <stdlib.h>

using namespace std;

class Student : virtual public Person{
private:
	int average;
	string institute;
public:
	Student();
	Student(char*, long, int, int, string);

	void setAverage(int);
	void setInstitute(string);

	int getAverage();
	string getInstitute();

	void Print() const;
};