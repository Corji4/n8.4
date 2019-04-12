#include "list.h"

template <typename NType>
turn<NType>::turn()
{
	next = NULL;
}

template <typename NType>
turn<NType>::~turn()
{

}

template <typename NType>
void turn<NType>::add(NType new_element)
{
	element = new_element;
	next = NULL;
}

template <typename NType>
void turn<NType>::print(turn<NType> *begin, turn<NType> *end)
{
	while (begin)
	{
		cout << begin->element;
	}
	cout << endl;
}