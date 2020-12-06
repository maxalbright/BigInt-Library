#include <iostream>
#include <vector>
#include <string>
#include "bigint.h"

using namespace std;

//This is just a file to test the operators

int main (int argc, char* argv[]) {


	// Basic Oeerator Tests
	cout << endl << "Basic Operator Tests with -32 as the LHS and 99 as the RHS (base 10):" << endl;

	BigInt lhs(-32, 10);
	BigInt rhs(99, 10);
	BigInt two(2, 10);

	cout <<  "Addition Test: " << (lhs+rhs).to_string() << endl;
	cout <<  "Subtraction Test: " << (lhs-rhs).to_string() << endl;
	cout <<  "Multiplication Test: " << (lhs*rhs).to_string() << endl;
	cout <<  "Division Test: " << (lhs/rhs).to_string() << endl;
	cout <<  "Modulus Test: " << (lhs%rhs).to_string() << endl;
	cout <<  "Exponentiation Test: " << pow(lhs, rhs).to_string() << endl;
	cout <<  "Modular Exponentiation Test: " << modPow(lhs, rhs, two).to_string() << endl << endl;


	//Miscellaneous Other Tests
	cout << "Miscellaneous Other Tests:" << endl;

	BigInt a(123134, 10);
	BigInt b(-32, 10);

	a-=b;
	for (int i = 0; i < 4; i++) {
		a /= b;
		cout << a.to_string() << endl;
	}


	BigInt c("8C12A4", 16);
	BigInt d("B", 16);
	
	c.exponentiation(d);
	cout << c.to_string() << endl;



	return 0;
}
