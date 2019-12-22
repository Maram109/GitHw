#pragma once
#include "Person.h"
#include "Employee.h"
#include <iostream>
using namespace std;
Employee::Employee() {
	char name[10] = { "" };
	long id = 0;
	int age = 0;
	float salary = 0.0;
}
Employee::Employee(char* n, long i, int a, float s):Person(n, i, a) {
	salary = s;
}
void Employee::setSalary(float s) {
	salary = s;
}
float Employee::geSalary() {
	return salary;
}

void Employee::Print()const
{
	Person::Print();
	cout << "Salary" << salary << endl;
}
