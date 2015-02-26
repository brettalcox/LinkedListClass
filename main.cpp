#include <iostream>
#include "LinkedList.h"
#include <string>
#include <cstdlib>
#include <time.h>
using std::string;
using std::cout;

int main(int argc, char *argv[]) {
    srand(time(NULL));
    float randomFloat;

    //randomFloat = randomFloat / 10000000;
    for (int i = 0; i < 5000; i++) {
    randomFloat = (((float)rand() / RAND_MAX) * 9.8) + 0.01;
        cout << randomFloat << std::endl;
        }
	LinkedList<float> list;
	list.addToFront(randomFloat);
	return (0);
}
