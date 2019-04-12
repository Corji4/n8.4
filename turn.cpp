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
void turn<NType>::add(turn<NType> *&begin, turn<NType> *&end, NType new_element)
{
	turn<NType> *pv = NULL;
	pv = new turn<NType>;
	pv->next = NULL;
	pv->element = new_element;
	if (!begin)
	{
		begin = pv;
		end = begin;
	}
	else
	{
		end->next = pv;
		end = pv;
	}
}