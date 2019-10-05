#include <bits/stdc++.h>

int 
knapsack_space_optimized ( int n, int m, std::vector<int> v, std::vector<int> w ) {
	int k[m + 1], prev, curr;
	std::memset(k, 0, sizeof k);
	for ( int i = 0; i < n; ++i ) {
		for ( int j = m; j > 0; --j ) {
			if ( w[i] <= j ) {
				prev = v[i] + k[j - w[i]];
				curr = k[j];
				k[j] = std::max( prev, curr );
			}
		}
	}
	return k[m];
}

int 
knapsack ( int n, int m, std::vector<int> v, std::vector<int> w ) {
	int k[n+1][m+1], prev, curr;
	for ( int i = 0; i <= n; ++i ) {
		for ( int j = 0; j <= m; ++j ) {
			if ( i == 0 || j == 0 )	k[i][j] = 0;
			else if ( w[i - 1] <= j ) {
				prev = v[i - 1] + k[i - 1][j - w[i - 1]];
				curr = k[i- 1][j];
				k[i][j] = std::max( prev, curr );
			} else k[i][j] = k[i - 1][j];
		}
	}
	return k[n][m];
}

int 
main ( void ) {
	int t; std::cin >> t;
	while ( t-- ) {
		int num, capacity; 
		std::cin >> num >> capacity;
		std::vector<int> values, weight;
		std::copy_n(std::istream_iterator<int>(std::cin), num, std::back_inserter(values));
		std::copy_n(std::istream_iterator<int>(std::cin), num, std::back_inserter(weight));
		std::cout << knapsack( num, capacity, values, weight ) << std::endl;
	}
	return 0;
}