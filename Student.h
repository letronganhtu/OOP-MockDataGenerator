#include <iostream>
using namespace std;

#include "Date.h"
#include "Address.h"

class Student {
private:
	int _studentID;
	string _studentName;
	double _gpa;
	string _telephone;
	string _mail;
	Date _dob;
	Address _homeAddress;
public:
    Student(int, string, double, string, string, Date, Address);
public:
    int id();
    string name();
    double gpa();
    string telephone();
    string mail();
    Date dob();
    Address address();
};