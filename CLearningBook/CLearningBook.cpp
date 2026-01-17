#include <iostream>
#include <string>
#include <vector>
using namespace std;
// параметр vec - это константная ссылка на вектор строк
void display(const vector<string>& inventory);

int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");
	display(inventory);
	return 0;
}
// параметр vec - это константная ссылка на вектор строк
void display(const vector<string>& vec)
{
	cout << "Your items:\n";
	for (vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		cout << *iter << endl;
	}
}

/*
e:
cd \_CODEWARS\_projects\CLearningbook\git
*/