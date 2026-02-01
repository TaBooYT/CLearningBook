#include <iostream>

using namespace std;

class Critter
{
public:
	static int s_Total; // объявление статической переменной-члена
	// Общее количество существующих объектов Critter
	Critter(int hunger = 0);
	static int GetTotal(); // прототип статической функции-члена
private:
	int m_Hunger;
};
int Critter::s_Total = 0; // инициализация статической переменной-члена
Critter::Critter(int hunger) :m_Hunger(hunger)
{
	cout << "A critter has been born!" << endl;
	++s_Total;
}
int Critter::GetTotal() // определение статической функции-член
{
	return s_Total;
}

int main()
{
	cout << "The total number of critters is: ";
	cout << Critter::s_Total << "\n\n";
	Critter crit1, crit2, crit3;
	cout << "\nThe total number of critter is: ";
	cout << Critter::GetTotal() << "\n";
	return 0;
}



/*
e:
cd \_CODEWARS\_projects\CLearningbook\git
*/