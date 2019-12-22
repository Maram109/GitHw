#pragma once

class Person {
private:
	char name[10];
	long id;
	int age;
public:
	Person();
	Person(char*, long, int);

	void setName(char*);
	void setId(long);
	void setAge(int);

	char* getName();
	long getId();
	int getAge();

	virtual void Print()const ;

};