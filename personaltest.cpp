#include <iostream>
#include <vector>
#include <string>
#include "bigint.h"

using namespace std;

//This is just a file to test the operators

int main (int argc, char* argv[]) {
	BigInt a(123134, 10);
	BigInt b(-32, 10);
	a-=b;
	for (int i = 0; i < 10; i++) {
		a %= b;
		cout << a.to_string() << endl;
	}

	return 0;
}
