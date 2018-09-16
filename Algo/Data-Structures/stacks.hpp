// Implemented using stacks

#include <iostream>

class stack {
private:
  int top = -1;
public:
  stack():size(x) {
    int* stack = new int[size];
    if (stack == nullptr) stderr();
  }
  int push();
  bool push();
}

void stack::push(auto x) {
  if (full()) stderr("Overflow");
  else stack[++top] = x;  
}

void stack::pop(void) {
  if (empty()) stderr("Underflow");
  else stack[top--];
}

class status : public stack {
public:
  bool full();
  bool empty();
  auto peek();
  unsignesd int size();
  char print();
}

bool status::full (void) {
  return (top >= size - 1) ? true : false;
}

bool status::empty (void) {
  return (top < 0) ? true : false;
}

template <class T>
T status::peek (void) {
  return stack[top];
}

auto status::size (void) {
  
  
}

char status::print (void) {
  
  
}

int main (void) {
  stack s(100);
  for (int i = 0; i < 10; ++i)
    push(i + 1);
  s.pop();
  s.pop();
  std::cout << s.peek() << std::endl;
  (s.empty()) ? std::cout << "Empty" : std::cout << "Not Empty";
  return 0;
}
