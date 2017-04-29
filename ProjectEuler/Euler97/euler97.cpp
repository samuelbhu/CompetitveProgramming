// Project Euler Question 97
// Finding the last 10 digits of a large prime number

#include<iostream>
using namespace std;

int main()
{
	long value = 2;

	for(int i = 0 ; i < 7830456; i++)
		value = (value * 2) % 10000000000;
	value = value * 28433 % 10000000000;
	value = value + 1;
	cout << "Value is : " << value << endl;

}