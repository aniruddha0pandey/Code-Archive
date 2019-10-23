#include <bits/stdc++.h>

unsigned long long 
ways ( int n ) {
	return (n <= 1) ? 1 : ways(n - 1) + ways(n - 2);
}

int 
main ( void ) {
	int t; std::cin >> t;
	for ( int i = 0; i < t; ++i ) {
		int n; std::cin >> n;
		std::cout << ways(n) << " ";
	} puts("");
	return 0;
}

