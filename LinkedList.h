#pragma once
#include"Node.h"
template <typename E>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	const E& getFront() const;
	void addToFront(const E& e);
	void removeFromFront();
	bool isEmpty() const;

	void reset();
	bool hasNextItem();
	const E& getNode() const;
	void advItr();

private:
	Node<E>* head;
	Node<E>* itr;
};

