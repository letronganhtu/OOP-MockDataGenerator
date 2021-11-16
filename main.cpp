#include <iostream>
#include <ctime>
using namespace std;

class RandomIntegerGenerator {
public:
	RandomIntegerGenerator() {
		srand(time(NULL));
	}
public:
	int next() {
		int result = rand();
		return result;
	}
	
	int next(int ceiling) {
		int result = rand() % ceiling;
		return result;
	}

	int next(int left, int right) {
		int result = left + rand() % (right - left + 1);
		return result;
	}
};

int main() {
	return 0;
}