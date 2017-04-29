#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool calcChange(int lineLength);
int main()
{
	int lineLength;
	bool result;

	//read in moviegoers
	cin >> lineLength;
	result = calcChange(lineLength);
	if(result == 0)
		cout << "NO";
	else
		cout << "YES";
	return 0;
}


bool calcChange(int lineLength)
{	
	int ones = 0;
	int quarter = 0;
	int half = 0;
	string value;
	cin.ignore();
	for (int i=0;i < lineLength; i++)
	{
		if (i == lineLength -1)
			getline(std::cin,value);
		else
			getline(std::cin,value,' ');
		if(value == "25")
		{
			quarter++;
		}
		else if(value == "50")
		{
			quarter--;
			half++;
		}
		else if(value == "100")
		{

			if(half > 0)
			{
				half--;
				quarter--;
			}
			else
				quarter = quarter - 3;
			ones++;
		}
		else
			return false;

		if(quarter < 0)
			return false;

	}
	return true;
}