#include <iostream>

size_t
strlenght (const char *str, const char *p) {
  if (str == NULL) return 0;
  p = str;
  while (*p != '\0')  p++;
  return p - str;
}

int main (void) {
  std::string str[]("hello");
  std::cout << strlenght(str) << std::endl;
  return 0;
}
