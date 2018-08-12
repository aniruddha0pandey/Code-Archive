#include <iostream>
#include <time.h>

void swap (int* a, int* b, int tmp) {
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main (void) {
  double t = clock();
  int x, y;
  std::cin >> x >> y;
  swap (&x, &y);
  std::cout << "Execution Time   : " << (clock() - t) / CLOCKS_PER_SEC / 100.0 << std::endl;
  std::cout << "Process Returned : " << "0 (0x0)" << std::endl;
  return 0;
}
