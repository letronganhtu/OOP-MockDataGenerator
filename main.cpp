#include <iostream>
using namespace std;

#include "RandomIntegerGenerator.h"
#include "StudentDataReader.h"

int main() {
	// Read file and save data in vector of Student
	StudentDataReader sdr("students.txt");
	vector<Student> studentList = sdr.readAll();

	// Generate randomly a number in the range of [5, 10]
	RandomIntegerGenerator rng;
	int n = rng.next(5, 10);

	// Test code
	/*for (int i = 0; i < studentList.size(); i++) {
		cout << studentList[i].id() << "           " << studentList[i].name() << endl;
		cout << studentList[i].gpa() << "\t" << studentList[i].telephone() << "\t" << studentList[i].mail() << endl;
		cout << studentList[i].dob().day() << "/" << studentList[i].dob().month() << "/" << studentList[i].dob().year() << endl;
		cout << studentList[i].address().numberAddress() << "--" << studentList[i].address().streetName() << "--" 
			<< studentList[i].address().wardName() << "--" << studentList[i].address().districtName() << "--" <<
			studentList[i].address().cityName() << endl << endl;
 	}*/

	return 0;
}