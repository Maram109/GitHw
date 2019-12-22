#include "Employee.h"
#include "Student.h"
#include "Employee.h"
#include "WorkingStudent.h"
#include<iostream>>
#include <string.h>
using namespace std;
int main() {
	int k;
	int size;
	char name[10];
	long id;
	int age;
	int average;
	string institute;
	float salary;
	bool same_institute = true;
	int choice;
	cout << "Enter size" << endl;
	cin >> size;
	Person** arr = new Person*[size];
	
	for (int i = 0; i < size; i++) {
		cout << " Enter Person type: 1-for Person " << endl;
		cout << " Enter Person type: 2-for Student " << endl;
		cout << " Enter Person type: 3-for Employee " << endl;
		cout << " Enter Person type: 4-for Employee " << endl;
		cin >> choice;

		if (choice == 1) {
			cout << " Enter name , id , age: " << endl;
			cin >> name >> id >> age;
			arr[i] = new Person(name, id, age);
		}
		else if (choice == 2) {
			cout << "Enter name , id , age, average, institute " << endl;
			cin >> name >> id >> age >> average >> institute;
			arr[i] = new Student(name, id, age, average, institute);
		}
		if (choice == 3) {
			cout << "  Enter name , id , age, salary: " << endl;
			cin >> name >> id >> age >> salary;
			arr[i] = new Employee(name, id, age, salary);
		}
		else if (choice == 4) {
			cout << "Enter name , id , age, salary,same_institute :"<<endl;
			cin >> name >> id >> age >> salary;
			arr[i] = new WorkingStudent(name, id, age, average, institute,salary,same_institute);
		}
		else
			cout << " Invalid choice , try again !" << endl;
	}
	for (int i = 0; i < size; i++) {
		arr[i]->Print();
	}
	cin >> k;
}
	