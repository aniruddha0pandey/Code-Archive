// n: {1 ≤ n ≤ 12}

#include <iostream>

int
fact (int n) {
	return (n < 1) ? 1 : n * fact(n - 1);
}

int
main (void) {
	int n;
	std::cin >> n;
	std::cout << fact(n);
	return 0;
}
