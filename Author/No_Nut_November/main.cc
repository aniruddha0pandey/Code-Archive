#include <bits/stdc++.h>

template<typename Arg> inline void 
increment ( Arg& arg ) {
	arg = arg + 1;
}

template<typename Arg, typename ... Args> inline void 
increment ( Arg& arg, Args& ... args ) {
	arg = arg + 1;
	increment(args...);
}

int 
max_nuts( std::vector<char> v, int k ) {
	int max;
	std::vector<int> squirrels, nuts;

	for ( int i = 0; i < v.size(); ++i ) {
		if ( v[i] == 'S' ) squirrels.push_back(i);
		else if ( v[i] == 'N' ) nuts.push_back(i);
	}

	int i = 0, j = 0;
	while ( i < nuts.size() && j < squirrels.size() ) {
		if ( std::abs(nuts[i] - squirrels[j]) <= k )
			increment<int, int, int>(max, i, j);
		else if ( nuts[i] < squirrels[j] )
			increment<int>(i);
		else
			increment<int>(j);
	}
  
	return max;
}

int 
main ( void ) {
	int t; std::cin >> t;
	while ( t-- ) {
		std::vector<char> v;
		int k, n; std::cin >> k >> n;
		std::copy_n(std::istream_iterator<char>(std::cin), n, std::back_inserter(v));
		std::cout << max_nuts(v, k) << std::endl;
	}
	return 0;
}