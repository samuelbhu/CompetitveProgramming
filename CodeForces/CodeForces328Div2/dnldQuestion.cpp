#include<iostream>
using namespace std;

int main()
{
	char* board[8];
	for (int i = 0; i < 8; ++i)
	{
		board[i] = new char[8];
	}
	cout << endl;
	for (int i = 0; i < 8; ++i)
	{
		cout << endl;
		for (int j = 0; j < 8; ++j)
		{					
			cin >> board[i][j];
			cout << board[i][j];
		}
		
	}
}