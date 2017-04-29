#include<iostream>

using namespace std;

int main()
{
	int piles, students;
	int totalboxes = 0;
	int pilearr[100001];
	int studarr[100001];

	cin >> piles;
	cin >> students;
	studarr[0] = students;
	for(int i = 1; i <= piles;i++)
	{
		cin >> pilearr[i];
		totalboxes += pilearr[i];
	}
	cout << "Boxes:" << totalboxes;
	while(totalboxes > 0)
	{
		
	}
}