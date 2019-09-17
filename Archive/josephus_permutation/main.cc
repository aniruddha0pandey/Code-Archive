#include <bits/stdc++.h>

bool pos_starts_from_1 = true;

int 
josephus_permutation ( int n, int k ) {
	if ( n == 0 ) return k;
	else return (josephus_permutation(n - 1, k) + k) % n;
}

int 
main ( void ) {
	int t, n, k, safe_position;
	std::cin >> t;
	while ( t-- ) {
		std::cin >> n >> k;
		safe_position = josephus_permutation(n, k);
		if ( pos_starts_from_1 ) safe_position++;
		std::cout << safe_position << std::endl;
	}
	return 0;
}
