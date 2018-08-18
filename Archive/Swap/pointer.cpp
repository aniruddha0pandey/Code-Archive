#include <iostream>
#include <time.h>

void swap (int* a, int* b, int tmp) {
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main (void) {
  clock_t start = clock();
  int x, y;
  std::cin >> x >> y;
  swap (&x, &y);
  clock_t end = clock();
  std::cout << "Execution Time   : " << (double)(end - start) / CLOCKS_PER_SEC << std::endl;
  std::cout << "Process Returned : " << "0 (0x0)" << std::endl;
  return 0;
}
