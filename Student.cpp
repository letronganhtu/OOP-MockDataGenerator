#include <ctime>

#include "Student.h"

Student::Student(int studentID, string studentName, double gpa, string telephone, string mail, Date dob, Address address) {
    _studentID = studentID;
	_studentName = studentName;
	_gpa = gpa;
	_telephone = telephone;
	_mail = mail;
	_dob = dob;
	_homeAddress = address;
}

int Student::id() { return _studentID; }
string Student::name() { return _studentName; }
double Student::gpa() { return _gpa; }
string Student::telephone() { return _telephone; }
string Student::mail() { return _mail; }
Date Student::dob() { return _dob; }
Address Student::address() { return _homeAddress; }