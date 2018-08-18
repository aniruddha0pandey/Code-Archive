#include <iostream>
#include <time.h>

void swap (int* a, int* b, int tmp) {
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main (void) {
  clock_t t = clock();
  int x, y;
  std::cin >> x >> y;
  swap (&x, &y);
  std::cout << "Execution Time   : " << (double)(clock() - t) / CLOCKS_PER_SEC << " s" << std::endl;
  std::cout << "Process Returned : " << "0 (0x0)" << std::endl;
  return 0;
}
