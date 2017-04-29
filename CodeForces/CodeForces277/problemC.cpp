#include<iostream>
using namespace std;

int main()
{
	int m,n;
	int* B = new int[m];
	for(int i = 0;i< m;i++)
		B[i] = new int[n];
	cin >> m >> n;

	for(int i = 0; i < m ; i++)
	{
		for(int j = 0;j<n;j++)
			cin << *B[i][j];
	}
	cout << B[m-1][n-1] << endl;
}