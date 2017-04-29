#include<iostream>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end
#include <iostream>
#define ASIZE 70000
using namespace std;
void add(int f1[], int f2[], int result[]);
void printa(int* arr);
bool checkPandigital(int fn[]);
int getLastDigit(int fn[]);
int main()
{
	int* f1;
	int* f2;
	int* fn;
	int a[ASIZE] = {0};
	int b[ASIZE] = {0};
	int c[ASIZE] = {0};
	int *addr;
	int l;
	f1 = a;
	f2 = b;
	fn = c;

	f1[0] = 1;
	f2[0] = 1;
	l = 1;
	int k=2;
	bool found = 0;

	while(!found)
	{
		add(f1,f2,fn);
		k++;
		addr = f2;
		f2 = f1;
		f1 = fn;
		if (k % 10000 == 0)
			cout << k << endl;
		if(checkPandigital(fn))
		{
			cout << "k is " << k << endl;
			printa(fn);
			found = true;
		}
		fn = addr;
	}
}


void add(int f1[], int f2[], int result[])
{
	bool carry = 0;
	for(int i=0;i < ASIZE;i++)
	{
		result[i] = f1[i] + f2[i];
		if(carry)
		{
			result[i]++;
			carry = false;
		}
		
		if (result[i] > 9)
		{
			result[i] = result[i] % 10;
			carry = true;
		}
	}
}

void printa(int* arr)
{
	int x;
	bool pastzeros = false;
	for(int i=1;i <= ASIZE; i++)
	{
		if (arr[ASIZE-i] !=0)
			pastzeros = true;
		if (pastzeros)
			cout << arr[ASIZE-i];
	}
}
int getLastDigit(int *fn) {
	int i = ASIZE;
	bool found = false;
	while (!found && i >= 0) {
		i--;
		if (fn[i] != 0)
			found = true; 
	}
	return i;
}
bool checkPandigital(int* fn) {

	int lastDigit = getLastDigit(fn);
	if (lastDigit < 10)
		return false;
	bool isPandigital = true;
	for (int val = 1; val < 10; val++) {
		bool isPresentLast = false;
		bool isPresentFirst = false;
		for (int j = 0; j < 9; j++) {
			isPresentFirst = (isPresentFirst || fn[j] == val);
		}

		for (int j = lastDigit; j > lastDigit - 9; j--) {
			isPresentLast = (isPresentLast || fn[j] == val);
		}
		isPandigital = (isPandigital && isPresentFirst && isPresentLast);
	}
	if (isPandigital)
		cout << "found pandigital" << endl;
	return isPandigital;
}