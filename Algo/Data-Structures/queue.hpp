// Array implementation of queue

#include <stdio.h>

class Queue {
private:
  int siz;
protected:
  int front, rear;
  static int count;
  int* arr;
public:
  Queue();
  enQueue();
  deQueue();
  ~Queue();  
}

Queue::Queue(int siz = 0) {
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

class status: public Queue {
private:
  empty();
  size();
}
