#include <bits/stdc++.h>

int main ( void ) {
	int n;
	std::cin >> n;
	std::vector<int> v(n);
	std::copy_n(std::istream_iterator<int>(std::cin), n, std::back_inserter(v));
	std::copy_n(std::ostream_iterator<int>(std::cout), n, " ");
	return 0;
}
