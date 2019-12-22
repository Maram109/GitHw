#include "Person.h"
#include <iostream>
using namespace std;
Person::Person() {
	char name[10] = { "" };
	long id = 0;
	int age = 0;
}
Person::Person(char* n, long i, int a) {
	*name = *n;
	id = i;
	age = a;
}
void Person::setName(char* n) {
	*name = *n;
}
void Person::setId(long i) {
	id = i;
}
void Person::setAge(int a) {
	age = a;
}
char* Person::getName() {
	return name;
}
long Person::getId() {
	return id;
}
int Person::getAge() {
	return age;
}


void Person::Print()const
{
	cout << "Name:" << name << endl;
	cout << "ID:" << id << endl;
	cout << "Age:" << age << endl;
}
