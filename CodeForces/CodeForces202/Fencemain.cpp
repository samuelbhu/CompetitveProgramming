#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int digits,extrap,indexmin,highestdig;
	int a[9];
	int v = 7; //answer is 2 8's and a 9
	int value;
	int leftover;
	string str;
	// find cheapest highest a
	cin >> v;
	indexmin = 0;
	getline(std::cin,str,' ');
	stringstream ss(str);
	ss >> a[0];
	for(int i=1; i < 9;i++)
	{	
		getline(std::cin,str,' ');
		stringstream ss(str);
		ss >> a[i];
		if(a[i] <= a[indexmin])
			indexmin = i;
	}
	if(a[indexmin] > v)
	{
		cout << "-1";
		return 0;
	}
	digits = v/a[indexmin];
	v = v - digits*a[indexmin];
	for(int i=0;i<digits;i++)
	{
		value = indexmin;
		for(int n = 8; n > indexmin;n--)
		{
			if(v >= a[n]-a[indexmin])
			{
				v = v-(a[n]-a[indexmin]);
				value = n;
				break;
			}
		}
		cout << value+1;
	}
}