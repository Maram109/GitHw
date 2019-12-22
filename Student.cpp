#include "Person.h"
#include "Student.h"
#include<iostream> 
#include<string> 
#include <stdlib.h>
Student::Student() {
	char name[10] = { "" };
	long id = 0;
	int age = 0;
	int average = 0;
	string institute = "";
}
Student::Student(char* n, long i, int a, int aver, string inst):Person(n, i, a) {
	average = aver;
	institute = inst;

}
void Student::setAverage(int aver) {
	average = aver;
}
void Student::setInstitute(string inst) {
	institute = inst;
}

int Student::getAverage() {
	return average;
}
string Student::getInstitute() {
	return institute;
}

void Student::Print()const
{
	Person::Print();
	cout << "Average:" << average << endl;
	cout << "Instiute" << institute << endl;
}
