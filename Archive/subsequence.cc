// INPUT
// $ cat test.in
// a b c d

// OUTPUT
// $ make subsequence && ./subsequence < test.in
// g++     subsequence.cc   -o subsequence
// [ a ]: { a }
// [ a b ]: { a } { b } { a b }
// [ a b c ]: { a } { b } { a b } { c } { a c } { b c } { a b c }
// [ a b c d ]: { a } { b } { a b } { c } { a c } { b c } { a b c } { d } { a d } { b d } { a b d } { c d } { a c d } { b c d } { a b c d }


#include <bits/stdc++.h>

void subsequence ( std::vector<char> v, int i ) {
	int n = std::pow(2, i + 1) - 1;
	for ( int k = 0; k < n; ++k ) {
		std::cout << "{ ";
		for ( int q = 0; q < (1 << q); ++q ) {
			if ( (k + 1) & (1 << q) )
				std::cout << v[q] << " ";
		} (std::cout << "} ");
	} (std::cout << "\n");
}

int
main ( void ) {
    std::string line;
    std::vector<char> v;

    std::getline(std::cin, line);
    std::istringstream stream(line);

	std::copy(std::istream_iterator<char>(stream),
	    std::istream_iterator<char>(),
	    std::back_inserter(v));

	for ( int i = 0; i < v.size(); ++i ) {
		std::cout << "[ ";
		for ( int j = 0; j <= i; ++j ) {
			std::cout << v[j] << " ";
		} (std::cout << "]: ");
		subsequence(v, i);
	}	    

	return 0;
}
