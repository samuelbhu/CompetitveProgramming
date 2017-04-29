#include <iostream>

using namespace std;
#define SIZE 20
bool bouncy(int a[20]);
int k = 0;
int main()
{
	int a[SIZE];
	int num = 0;
	int numbounce = 0;
	bool done = 0;
	int j;
	int numcreasing = 0;
	float proportion = 0.0;
	for(int i = 0; i < 20; i++)
	{
		a[i] = 0;
		cout << a[i];
	}
	while(1)
	{
		if(bouncy(a))
			numbounce++;
		else
			numcreasing++;

		for(j = 0,done = 0;!done;j++)
		{
			if(j == 20)
				return 0;
			if(a[j] < 9)
			{
				a[j]++;
				done = true;
			}
			else
				a[j] = 0;
		}
		k++;
		cout << k << endl;
		if(k == 538)
		{
			cout << (float)numbounce / (float)(numbounce + numcreasing);
			cin.get();
		}

	} 


	return 0;

}

bool bouncy(int a[SIZE])
{
	int prev;
	int i;
	i = 0;

	// Get past duplicate numbers
	while(a[i] == a[i+1] && (i+1) < SIZE)
	{
		i++;
	} 
	if(a[i+1] == -1)
		return false;

	else if(a[i] < a[i+1])
	{
		//increasing check
		while(i+1 < SIZE && a[i+1] != -1)
		{
			if(a[i] > a[i+1])
				return true;
			i++;
		}
	}
	else
	{
		//decreasing check
		while(i+1 < SIZE && a[i+1] != -1)
		{
			if(a[i] < a[i+1])
				return true;
			i++;
		}
	}
	return false;


}