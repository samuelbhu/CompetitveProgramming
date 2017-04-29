#include<iostream>
#include<string>

using namespace std;

int main()
{
	int binaryplace = 1;
	int count = 0;
	int n;
	cin >> n;
	while(n)
	{
		if(n%10 == 7)
			count = count + 2*binaryplace;
		else
			count = count+ binaryplace;
		binaryplace = binaryplace*2;
		n = n/10;
	}
	cout << count << endl;
}