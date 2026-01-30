#include <iostream>

using namespace std;
void badSwap(int x, int y);
void goodSwap(int* const pX, int* const pY);

int main()
{
	int myScore = 150;
	int yourScore = 1000;
	cout << "Original values\n";
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";
	cout << "Calling badSwap()\n";
	badSwap(myScore, yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";
	cout << "Calling badSwap()\n";
	goodSwap(&myScore, &yourScore);
	cout << "myScore: " << myScore << "\n";
	cout << "yourScore: " << yourScore << "\n\n";
	return 0;
}

void badSwap(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
}
void goodSwap(int* const pX, int* const pY)
{
	// Сохраняем в temp значение, на которое указывает pX
	int temp = *pX;
	// сохраняем значение, на которое указывал pY
	// по адресу, на который указывает pX
	*pX = *pY;
	// сохраняем значение, на которое изначально указывал pX,
	// по адресу, на который указывает pY
	*pY = temp;
}

/*
e:
cd \_CODEWARS\_projects\CLearningbook\git
*/