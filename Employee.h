#pragma once
#include "Person.h"
class Employee : virtual public Person {
private:
	float salary;
public:

	Employee();
	Employee(char*, long, int, float);

	void setSalary(float);
	float geSalary();

	void Print()const;
};
