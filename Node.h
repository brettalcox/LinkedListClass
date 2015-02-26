#pragma once

template <typename E>
class Node
{
private:
	E elem;
	Node<E>* next;

	template <typename E> friend class LinkedList;
};

