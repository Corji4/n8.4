#include <iostream>

using namespace std;

template <typename NType>
class turn
{
public:
	turn();
	~turn();
	void add(turn<NType> *&begin, turn<NType> *&end, NType new_elemen);
private:
	NType element;
	turn *next;
public:
	
};

template <typename Type=char>
class List
{

public:
	List();
	~List();
	void add(Type element);
	void print();
private:
	template <typename NType>
	class turn;
	turn *begin, *end;
};
