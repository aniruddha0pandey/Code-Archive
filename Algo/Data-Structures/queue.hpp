// Array implementation of queue

#include <iostream>

class Queue {
private:
  int siz;
protected:
  int front, rear;
  static int count;
  int* arr;
public:
  Queue();
  ~Queue();
  enQueue();
  deQueue();
};

void Queue::Queue(auto e = 0): siz(e) {
  front = rear = 0;
  arr = new int[siz];
}

virtual Queue::~Queue() {
  delete arr;
}

void Queue::enQueue(auto x) {
  if (full()) stderr("Overflow");
  else arr[rear++] = x;
}

template <class T>
T Queue::deQueue(void) {
  if (empty()) stderr("Underflow");
  else return arr[front++];
}

class Status: public Queue {
public:
  empty();
  size();
};

int Status::empty(int front, int rear) {
	return (rear - front);
}

int Status::size() {
	return;
}
