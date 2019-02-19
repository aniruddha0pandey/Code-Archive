#include <iostream>

int memoized_fibo( int n ) {
	int* result = new int[ n ];
	result[0] = result[1] = 1;
	for (int i = 2; i < n; ++i)
		result[i] = result[i - 1] + result[i - 2];
	return result[n - 1];
}

int fibo( int n ) {
	return (n <= 1) ? 1 : fibo(n - 1) + fibo(n - 2);
}

int main ( void ) {
	int n;
	std::cin >> n;
	std::cout << fibo( n );
	std::cout << memoized_fibo( n );
	return 0;
}
  
