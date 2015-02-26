#pragma once

template <typename E>
class Node
{
private:
	E elem;
	Node<E>* next;

friend class LinkedList;
};

