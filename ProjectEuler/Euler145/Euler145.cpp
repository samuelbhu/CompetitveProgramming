#include<iostream>
using namespace std;

bool checkodd(int val);
int reverse(int val);

int main()
{
	int numreverse = 0;
	for (int i = 1; i < 1000000000; ++i)
	{
		if(i%1000000 == 0)
			cout << "i: " << i << endl;
		if(i % 10 == 0)
			continue;
		if(checkodd(i+reverse(i)))
			numreverse++;
	}
	cout << "num reverseable: " << numreverse << endl;
	return numreverse;
}


int reverse(int val)
{
	int rev=0;
	while(val > 0)
	{
		rev *= 10;
		rev += val%10;
		val = val/10;
	} 
	return rev;
}
bool checkodd(int val)
{
	while(val > 0)
	{
		if(val%2 == 0)
			return false;
		else 
			val = val/10;
	}
	return true;
}
