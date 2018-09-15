// Implemented using stacks

#include <iostream>
#define SIZE 100

int stack[SIZE];
int top = -1;

bool push (auto x) {
  if (top >= SIZE) return false;
  else {
    stack[++top] = x;
    return true;
  }
}

template <class T>
 T pop (void) {
  if (top < 0) return false;
  else stack[--top];
}

template <class T>
T peek (void) {
  return stack[top];
}

bool empty (void) {
  return (top < 0);
}

int main (void) {
  for (int i = 0; i < 10; ++i)
    push(i + 1);
  std::cout << pop() << std::endl;
  std::cout << peek() << std::endl;
  std::cout << (empty)?"Empty":"Not Empty << std::endl;
  return 0;
}
