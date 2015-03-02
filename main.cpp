/*****************************************************
Programmer: Brett Alcox
Assignment: Asn4
Date: 02/26/2015
Platform/IDE: Gentoo / Code::Blocks

Description: Doubly linked list. Prints it and sorts it. However,
it only sorts values greater than the value of the head, so I add a
value of 0.01 to the front of the list before it sorts.

*****************************************************/
#include <iostream>
#include "LinkedList.h"
#include <string>
#include <cstdlib>
#include <time.h>
using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    srand(time(NULL));
    float randomFloat;
    float number = 5.0;

	LinkedList<float> list;
	list.createList(number);
    for (int i = 0; i < 20; i++) {
        randomFloat = (((float)rand() / RAND_MAX) * 9.8) + 0.01;
        list.addToFront(randomFloat);
    }

	list.resetToFront();
	list.printListForward();
    cout << endl << endl;
    list.resetToFront();
    list.resetToEnd();
    list.printListBackward();

	return 0;
}
