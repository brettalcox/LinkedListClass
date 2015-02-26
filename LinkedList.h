#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include"Node.h"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

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
	void printList();

private:
	Node<E>* head;
	Node<E>* itr;
};

template <typename E>
LinkedList<E>::LinkedList()
{
	head = NULL;
	itr = head;
}

template <typename E>
LinkedList<E>::~LinkedList()
{
	while (!isEmpty()) {
		removeFromFront();
	}
}

template <typename E>
const E& LinkedList<E>::getFront() const {
	return head->elem;
}

template <typename E>
void LinkedList<E>::addToFront(const E& e) {
	Node<E>* node = new Node <E> ;
	node->elem = e;
	node->next = head;
	head = node;
	if (itr == NULL) {
		itr = head;
	}
}

template <typename E>
void LinkedList<E>::removeFromFront() {
	Node<E>* old = head;
	if (!isEmpty()) {
		head = old->next;
		if (itr == old) {
			itr = head;
		}
		delete old;
	}
}

template <typename E>
bool LinkedList<E>::isEmpty() const {
	return head == NULL;
}

template <typename E>
void LinkedList<E>::reset() {
	itr = head;
}

template <typename E>
bool LinkedList<E>::hasNextItem() {
	return (itr != NULL ? true : false);
}

template <typename E>
const E& LinkedList<E>::getNode() const {
	if (itr != NULL) {
		return itr->elem;
	}
	else {
		return NULL;
	}
}

template <typename E>
void LinkedList<E>::advItr() {
	if (itr != NULL) {
		itr = itr->next;
	}
}

template <typename E>
void LinkedList<E>::printList() {
    if (!isEmpty()) {
        while (hasNextItem()) {
            cout << getNode() << endl;
            advItr();
        }
	}
}

#endif // LINKEDLIST_H
