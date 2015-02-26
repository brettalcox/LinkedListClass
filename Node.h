#ifndef NODE_H
#define NODE_H
#include "LinkedList.h"
template <typename E>
class Node
{
public:
	E elem;
	Node<E>* next;

template <typename E1> friend class LinkedList;
};

#endif // NODE_H
