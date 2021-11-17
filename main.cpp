#include "StudentDataReader.h"
#include "RandomStudentGenerator.h"

int main() {
	// Read file and save data back into a vector of Student
	StudentDataReader sdr("students.txt");
	vector<Student> studentList = sdr.readAll();

	// Generate randomly a number in the range of [5, 10]
	RandomIntegerGenerator rng;
	int n = rng.next(5, 10);
	cout << "n = " << n << endl;
	
	// Generate randomly n students and add to previous vector
	RandomStudentGenerator rsg;
	for (int i = 0; i < n; i++) {
		Student temp = rsg.randomStudent();
		studentList.push_back(temp);
	}

	// Test code
	for (int i = 0; i < studentList.size(); i++) {
		cout << studentList[i].id() << "           " << studentList[i].name() << endl;
		cout << studentList[i].gpa() << "\t" << studentList[i].telephone() << "\t" << studentList[i].mail() << endl;
		cout << studentList[i].dob().day() << "/" << studentList[i].dob().month() << "/" << studentList[i].dob().year() << endl;
		cout << studentList[i].address().numberAddress() << "--" << studentList[i].address().streetName() << "--" 
			<< studentList[i].address().wardName() << "--" << studentList[i].address().districtName() << "--" <<
			studentList[i].address().cityName() << endl << endl;
 	}

	return 0;
}