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

	LinkedList<float> list;
    for (int i = 0; i < 20; i++) {
        randomFloat = (((float)rand() / RAND_MAX) * 9.8) + 0.01;
        list.addToFront(randomFloat);
    }

	list.reset();
	list.printList();
	list.insertionSort(list.getHead());
	list.reset();
	cout << endl << endl << "Sorted:" << endl << endl;
	list.printList();

	return (0);
}
