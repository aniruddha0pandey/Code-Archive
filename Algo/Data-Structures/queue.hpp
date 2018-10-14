// Array implementation of queue

#include <iostream>
#include <stdlib.h>

class Queue {
private:
	int siz;
protected:
	int frontIndex, rearIndex;
	static int count;
	int* arr;
public:
	Queue(auto);
	~Queue();
	void enQueue(int);
	int deQueue();
	bool full();
	bool empty();
	int size();
};

Queue::Queue (int e = 0): siz(e) {
	frontIndex = rearIndex = 0;
	arr = new int[siz];
}

Queue::~Queue () {
	delete[] arr;
}

void Queue::enQueue (int x) {
	if ( full() ) {
		std::cerr << "Overflow";
		exit(EXIT_FAILURE);
	} else arr[rearIndex++] = x;
}

int Queue::deQueue () {
	if ( empty() ) std::cerr << "Underflow (";
	else return arr[frontIndex++];
}

bool Queue::full () {
	return (siz == rearIndex);
}

bool Queue::empty () {
	return (frontIndex == rearIndex);
}

int Queue::size () {
	return (rearIndex - frontIndex);
}
