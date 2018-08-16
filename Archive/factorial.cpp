// n: {1 ≤ n ≤ 12}

#include <iostream>

int
fibo (int n) {
	return (n < 1) ? 1 : n * fibo(n - 1);
}

int
main (void) {
	int n;
	std::cin >> n;
	std::cout << fibo(n);
	return 0;
}
