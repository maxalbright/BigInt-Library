/* 
See bigint.cpp for comments regarding each function
Author: Max Albright
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class BigInt {
  public:
  	BigInt();
  	BigInt(int setbase);
  	BigInt(int input, int setbase);
  	BigInt(const string &s, int setbase);
  	BigInt(const BigInt &b);
  	~BigInt();
  	string to_string();
  	int to_int() const;
  	int compare(const BigInt &b) const;


  	const BigInt & operator = (const BigInt &b);
  	const BigInt & operator += (const BigInt &b);
  	const BigInt & operator -= (const BigInt &b);
  	const BigInt & operator *= (const BigInt &b);
  	const BigInt & operator /= (const BigInt &b);
  	const BigInt & operator %= (const BigInt &b);
  	void divisionMain(const BigInt &b, BigInt &quotient, BigInt &remainder);
  	const BigInt & exponentiation(const BigInt &b);
  	const BigInt & modulusExp(const BigInt &b, const BigInt &m);


  private:
    int base;
    bool isPositive;
    vector<int> vec;
};

  BigInt operator + (const  BigInt &a, const BigInt & b);
  BigInt operator - (const  BigInt &a, const BigInt & b);
  BigInt operator * (const  BigInt &a, const BigInt & b);
  BigInt operator / (const  BigInt &a, const BigInt & b);
  BigInt operator % (const  BigInt &a, const BigInt & b);
  BigInt pow(const  BigInt &a, const BigInt & b);
  BigInt modPow(const BigInt &a, const BigInt &b, const BigInt &m);
  bool operator == (const BigInt &a, const BigInt &b);
  bool operator != (const BigInt &a, const BigInt &b);
  bool operator <= (const BigInt &a, const BigInt &b);
  bool operator >= (const BigInt &a, const BigInt &b);
  bool operator > (const BigInt &a, const BigInt &b);
  bool operator < (const BigInt &a, const BigInt &b);
