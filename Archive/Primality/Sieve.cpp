// OUTPUT
// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

#include <bits/stdc++.h>

std::vector<int> 
optimized_sieve_of_eratosthenes ( int n ) {
	std::vector<int> primes;
	std::vector<bool> isComposite(n+1);
	std::fill(isComposite.begin(), isComposite.end(), false);
	isComposite[0] = isComposite[1] = true;

	// Allocation multiple of 2, 3
	for ( int i=2; i<=3; i++ ) {
		for ( int j=i*i; j<=n; j+=i ) {
			isComposite[j]=true;
		}
	}

	// Allocation multiple of 4, 5, 6
	for ( int i=5, k=4; i*i<n; i+=(k^=6)) {
		if ( !isComposite[i] ) {
			for ( int j=i*i; j<=n; j+=i ) {
				isComposite[j]=true;
			}
		}
	}

	for ( int i = 2; i <= n; ++i ) {
		if ( !isComposite[i] ) primes.push_back(i);
	}

	return primes;
}

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

    {
		auto start = std::chrono::high_resolution_clock::now();
		std::vector<int> primes = sieve_of_eratosthenes(n);
		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		std::cout << "\n\n-----------------------\n";
		std::cout << "Execution Time: ";
		std::cout << elapsed.count();
		std::cout << " s" << std::endl;
    }

    {
		auto start = std::chrono::high_resolution_clock::now();
	    std::vector<int> primes = optimized_sieve_of_eratosthenes(n);
		auto finish = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> elapsed = finish - start;
		std::cout << "\n\n-----------------------\n";
		std::cout << "Execution Time: ";
		std::cout << elapsed.count();
		std::cout << " s" << std::endl;
    }

    // for ( auto const& num: primes )
    // 	std::cout << num << " ";

    return 0;
}
