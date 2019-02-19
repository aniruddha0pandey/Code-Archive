#include <iostream>

int memoized_fibo( int n ) {
	result[0] = result[1] = 1;
	for (int i = 2; i < n; ++i)
		result[i] = result[i - 1] + result[i - 2];
}

int fibo( int n ) {
	return (n <= 1) ? 1 : fibo(n - 1) + fibo(n - 2);
}

int main ( void ) {
	int n;
	std::cin >> n;
	int* result = new int[ n ];
	std::cout << fibo( n );
	memoized_fibo( n );
	std::cout << result[n];
	return 0;
}
  
