#include<iostream>
using namespace std;

int main()
{
	int n;
	int p;
	int x;
	int hash[300];
	int idx;
	int failurenum;
	bool success = true;
	for(int i = 0; i < 300; i++)
		hash[i] = -1;

	cin >> p;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> x;
		idx = x % p;
		if(hash[idx] == -1)
			hash[idx] = x;
		else
		{
			failurenum = i+1;
			success = false;
			break;
		}

	}

	if(success)
		cout << -1;
	else
		cout << failurenum;
}