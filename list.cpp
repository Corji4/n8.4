#include "list.h"

template <typename Type>
List<Type>::List()
{
	begin = NULL;
	end = NULL;
}

template <typename Type>
List<Type>::~List()
{

}

template <typename Type>
void List<Type>::add(Type element)
{
	turn<Type>::add(begin, end, element);

}

template <typename Type>
void List<Type>::print()
{
	turn<Type> *pv;
	pv = begin;
	while (pv)
	{
		cout << pv->element;
	}
	cout << endl;
}