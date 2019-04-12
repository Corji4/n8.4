#include "list.h"

template <typename Type>
List<Type>::List()
{
	begin = NULL;
	end = NULL;
}

template <typename Type>
List<Type>::List(Type element)
{
	begin = NULL;
	end = NULL;
	this->add(element);
}

template <typename Type>
List<Type>::~List()
{

}

template <typename Type>
void List<Type>::add(Type element)
{
	turn<Type> *pv;
	pv->add(element);
	if (!begin)
	{
		begin = pv;
		end = pv;
	}
	else
	{
		end->next = pv;
		end = pv;
	}
}

template <typename Type>
void List<Type>::print()
{
	turn<Type> *pv = begin;
	while (pv)
	{
		cout << pv->element;
	}
	cout << endl;
}