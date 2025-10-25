#include <iostream>


using namespace std;
int main()
{
	cout << "Counting forward:\n";
	for (auto i = 0; i < 10; i++)
	{
		cout << i << " ";
	}
	cout << "\n\nCounting backward:\n";
	for (auto i = 9; i >= 0; i--)
	{
		cout << i << " ";
	}
	cout << "\n\nCounting by fives:\n";
	for (auto i = 0; i <= 50; i+=5)
	{
		cout << i << " ";
	}
	cout << "\n\nCounting forward:\n";
	int count = 0;
	for ( ; count < 10; )
	{
		cout << count << " ";
		++count;
	}
	cout << "\n\nCounting with nested for loops:\n";
	const int ROWS = 5;
	const int COLUMS = 3;
	for (auto i = 0; i < ROWS; i++)
	{
		for (auto j = 0; j < COLUMS; j++)
		{
			cout << i << "." << j << " ";
		}
		cout << endl;
	}
	return 0;
}
