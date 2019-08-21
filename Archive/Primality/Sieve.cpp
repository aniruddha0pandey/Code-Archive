// OUTPUT
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

#include <bits/stdc++.h>

std::vector<int> 
sieve_of_eratosthenes ( int n ) {
	std::vector<int> primes;
	std::vector<bool> isComposite(n+1);
	std::fill(isComposite.begin(), isComposite.end(), false);
	isComposite[0] = isComposite[1] = true;

	for ( int i = 2; i <= n; ++i ) {
		if ( !isComposite[i] ) {
			primes.push_back(i);
			for ( int j = i*i; j <= n; j+=i ) {
				isComposite[j] = true;
			}
		}
	}

	return primes;
}

int 
main ( void ) {
    int n = 100;
    std::vector<int> primes;
    primes = sieve_of_eratosthenes(n);
    for ( auto const& num: primes )
    	std::cout << num << " ";
    return 0;
}

