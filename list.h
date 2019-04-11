#include <iostream>

using namespace std;

template <typename Type>
class List
{
public:
	List();
	~List();
	void add(Type element);
	void add_first(Type element);
	void del();
	void print();
	//List compare(List First, List Second);
private:
	struct turn
	{
		Type element;
		turn *next;
	};
	turn *begin, *end;
};