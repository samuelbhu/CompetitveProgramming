#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	char header[10];
	char ch = 'a';
	int val = 0;
	char line[9];
	char** grid = new char*[9];
	for (int i = 0; i < 9; ++i)
	{
		grid[i] = new char[9];
	}
	fstream fin;
	fin.open("p096_sudoku.txt",fstream::in);
	while(!fin.eof())
	{
		fin >> header;
		fin >> header;
		cout << header << endl;
		for (int i = 0; i < 9; ++i)
		{	
			fin >> line;
			for(int j = 0;j<9;j++)
			{
				grid[i][j] = line[j];

			}
			cout << endl;
			cin.get();
		}
	}

	return 0;
}

int solvepuzzle(char grid[][9])
{
	if(!check(grid))
		return 0;

	// change a val
}
bool check(int* grid)
{

}
void printgrid(char* grid)
{
	for (int i = 0; i < 9; ++i)
	{
		for(int j = 0; j < 9; ++j)
			cout << grid[i][j];
		cout << endl;
	}
}
