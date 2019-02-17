#include <iostream>

int fibo( int n ) {
  return (n <= 1) ? 1 : fibo(n - 1) + fibo(n - 2);
}

int main ( void ) {
	int n;
	std::cin >> n;
  std::cout << fibo(n);
  return 0;
}
  
