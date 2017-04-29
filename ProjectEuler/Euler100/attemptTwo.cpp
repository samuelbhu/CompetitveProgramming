//Project Euler 100 Samuel Bhushan

#include<iostream>

using namespace std;

int main()
{
	long n = 1;
	long b = 1;
	long tempn;
	long tempb;

	while(n < 1000000000000)
	{
		tempb = b*3+n*2-2;
		tempn = b*4+n*3-3;
		cout << "New quantity!: " << tempb << " with blue count: " << tempn << endl;
		cin.get();
		b = tempb;
		n = tempn;
	}
	cout << "SOLUTION!: " << n << " with blue count: " << b << endl;

	return 0;
}