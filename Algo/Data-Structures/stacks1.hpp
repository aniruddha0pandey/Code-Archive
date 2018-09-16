// Implemented using stacks

#include <iostream>

class stack {
private:
  int top = -1;
public:
  stack();
  int push();
  bool push();
  ~stack();
}

stack::stack():siz(x) {
  int* arr = new int[siz];
  if (arr == nullptr) stderr();
} 

void stack::push(auto x) {
  if (full()) stderr("Overflow");
  else arr[++top] = x;  
}

void stack::pop(void) {
  if (empty()) stderr("Underflow");
  else arr[top--];
}

stack::~stack() {
  delete[] arr;
} 

class status : public stack {
public:
  bool full();
  bool empty();
  auto peek();
  unsigned int size();
  char print();
}

bool status::full (void) {
  return (top >= siz - 1) ? true : false;
}

bool status::empty (void) {
  return (top < 0) ? true : false;
}

template <class T>
T status::peek (void) {
  return arr[top];
}

auto status::size (void) {
  return sizeof(top * (stack[0]);
  return stack.length();
}

char status::print (void) {
	for (int i = 0; i < size(); ++i)
    std::cout << arr[i];
  return puts("");
}
