#include<iostream>
#include<string>

using namespace std;

string ones (int num);
string tens (int num);

string teens (int num);
void test(int score);

int main()
{
	//for (int i=0;i<100;i++)
	//{
		test(0);
	//}
	return 0;
}

void test(int score)
{
	cin >> score;
	if (score == 0)
		cout << "zero" << endl;
	else if (score == 10)
		cout << "ten" << endl;
	else if(score > 19 || score < 11)
		cout << tens(score) + ones(score) << endl;
	else
		cout << teens(score) << endl;
}
string teens (int num)
{
	switch(num)
	{
		case 11:
		return "eleven";
		break;
		case 12:
		return "twelve";
		break;
		case 13:
		return "thirteen";
		break;
		case 14:
		return "fourteen";
		break;
		case 15:
		return "fifteen";
		break;
		case 16:
		return "sixteen";
		break;
		case 17:
		return "seventeen";
		break;
		case 18:
		return "eighteen";
		break;
		case 19:
		return "nineteen";
		break;
		default:
		return "error";
		break;
	}

}
string ones (int num)
{
	int onePlace = num % 10;
	switch (onePlace)
	{
		case 0:
		return "";
		break;
		case 1:
		return "one";
		break;
		case 2:
		return "two";
		break;
		case 3:
		return "three";
		break;
		case 4:
		return "four";
		break;
		case 5:
		return "five";
		break;
		case 6:
		return "six";
		break;
		case 7:
		return "seven";
		break;
		case 8:
		return "eight";
		case 9:
		return "nine";
		default:
		return "error";
	}
}
string tens (int num)
{
	int numTen;
	numTen = num - num%10;
	string result;
	switch (numTen)
	{
		case 0:
		return "";
		break;
		case 20:
		result =  "twenty";
		break;
		case 30:
		result =  "thirty";
		break;
		case 40:
		result =  "forty";
		break;
		case 50:
		result =  "fifty";
		break;
		case 60:
		result =  "sixty";
		break;
		case 70:
		result =  "seventy";
		break;
		case 80:
		result =  "eighty";
		break;
		case 90:
		result =  "ninety";
		break;
		default:
		result =  "error";
		break;
	}
	if (num%10 == 0)
		return result;
	else
		return result+"-";
	
}