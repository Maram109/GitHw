#include "Student.h"
#include "Employee.h"
#include "Employee.h"

#include "WorkingStudent.h"
WorkingStudent::WorkingStudent() {

}
WorkingStudent::WorkingStudent(char* n, long i, int a, int aver, string inst, float s, bool same):Student(n, i, a,aver, inst) {
	
	same_institute = same;
}

void WorkingStudent::setSame(bool same) {
	same_institute = same;
}
bool WorkingStudent::getSam() {
	return same_institute;
}

void WorkingStudent::Print()const
{
	Student::Print();
	Employee::Print();
	cout << "Is thae same institute " << same_institute << endl;
}

