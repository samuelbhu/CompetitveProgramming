#include<iostream>
#include<math.h>
#include<vector>
using namespace std;


bool isprime(int val)
{
	bool arr[10002];
	fill(arr,end(arr),true);
	vector<int> primes;
	for(int i = 2; i < sqrt(val); i++)
	{
		if(arr[i] == true)
		{
			for(int j = i*i;j < val;j+=i)
			{
				arr[j] = false;

				// arr[j] is comp

			}
		}
	}
	for(int i = 0; i < 100002; i++)
	{
		if(arr[i] == true)
		{
			primes.push_back(i);
		}
	}
	return true;
}


int main()
{
	isprime(10000);
	return 0;
}