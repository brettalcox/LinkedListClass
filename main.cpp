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
    randomFloat = (((float)rand() / RAND_MAX) * 9.8) + 0.01;
	LinkedList<float> list;

	list.addToFront(randomFloat);
	list.reset();
	list.printList();
	return (0);
}
