#include <iostream>
#include <vector>
#include <string>
#include "bigint.h"

using namespace std;

int main (int argc, char* argv[]) {
	BigInt a(123134, 10);
	BigInt b(-32, 10);
	a-=b;
	cout << a.to_string() << endl;



	return 0;
}
