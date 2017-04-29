#include<iostream>
using namespace std;
#define N 7
#define M 3
int main()
{
	long possibilities[N+2]; // holds number of possibilitities for each size

	for(int totalsize = 0; totalsize <= N+1; totalsize++)
	{
		// go through all totalsize sizes
		possibilities[totalsize] = 1;

		for(int red = M+1; red <= totalsize; red++)
		{
			// go through all n sizes
			
			for(int open = 0; open <= (totalsize-red);open++)
			{
				possibilities[totalsize] += possibilities[totalsize-(open+red)];
			}
		}
	}
	cout << "Ways: " << possibilities[N+1] << endl;
	return 0;
}