#include <iostream>

void swap (int* a, int* b, int tmp) {
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main (void) {
  int x, y;
  std::cin >> x >> y;
  swap(&x, &y);
  return 0;
}
