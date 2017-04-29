#include<iostream>
using namespace std;
int main()
{
	string s;
	char letter;
	char a = 'a';
	int value = 0;
	int ws [26];
	int charnum;
	int max = 0;
	int i;
	int k;

	cin >> s;
	cin >> k;

	for(i = 0; i < 26; i++)
	{
		cin >> ws[i];
		if(ws[i] > max)
			max = ws[i];
	}

	for(i = 0; i < s.size(); i++)
	{
		charnum = (int)s[i] - (int)a;
		value += ws[charnum] * (i+1);
	}
	for(int j = 0; j < k; j++)
	{
		value += max*(i+1);
		i++;
	}
	cout << value;


}