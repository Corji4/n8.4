#include <iostream>

using namespace std;

template <typename NType>
class turn
{
public:
	turn();
	~turn();
	void add(NType new_elemen);
	void print(turn<NType> *begin, turn<NType> *end);
private:
	NType element;
	turn *next;
};

template <typename Type=char>
class List
{
public:
	List();
	List(Type element);
	~List();
	void add(Type element);
	void print();
private:
	template <typename NType>
	class turn;
	turn<Type> *begin, *end;
};
