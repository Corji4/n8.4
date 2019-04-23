#include "list.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	list<char> one, two, result;
	string str;
	cout << "¬ведите первый список:\n";
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		one.add(str.at(i));
	}
	cout << "¬ведите второй список:\n";
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		two.add(str.at(i));
	}
	for (int i = 0; i < one.get_size(); i++)
	{
		if (!result.check(one.at(i)) && !two.check(one.at(i)))
		{
			result.add(one.at(i));
		}
	}
	result.print();
	system("pause");
	return 0;
}