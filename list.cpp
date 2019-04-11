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
void List<Type>::add_first(Type element)
{
	if (begin)
	{
		add(element);
		return;
	}
	turn *pv;
	pv = new turn;
	pv.element = element;
	pv.next = NULL;
	begin = pv;
	end = begin;
}

template <typename Type>
void List<Type>::add(Type element)
{
	if (!begin)
	{
		add_first(element);
		return;
	}
	turn *pv;
	pv = new turn;
	pv.element = element;
	pv.next = NULL;
	end.next = pv;
	end = pv;
}

template <typename Type>
void List<Type>::del()
{
	while (begin)
	{
		turn *pv;
		pv = begin;
		begin = begin.next;
		delete pv;
	}
	end = NULL;
}

template <typename Type>
void List<Type>::print()
{
	turn *new_begin = begin;
	while (new_begin)
	{
		cout << new_begin.element << " ";
	}
	cout << endl;
}