#include <bits/stdc++.h>

std::vector<int> 
arrange ( std::vector<int> pots, std::vector<int> broken_pots ) {
	std::vector<int> arranged_pots(pots);
	for ( int i = 0; i < broken_pots.size(); ++i ) {
		for ( int j = 0; j < pots.size(); ++j ) {
			if ( broken_pots[i] == pots[j] ) {
				pots.erase(pots.begin() + j);
				pots.push_back(broken_pots[i]);
				break;
			}
			
		}
	}
	return pots;
}

int
main ( void ) {
	int T, N, M, input;
	std::cin >> T;
	while ( T-- ) {
	    std::vector<int> pots, broken_pots, arranged_pots;
	    std::vector<int>::iterator it;
		std::cin >> N >> M;
		for ( int i = 0; i < N; ++i ) {
			std::cin >> input;
			pots.push_back(input);
		}
		for ( int i = 0; i < M; ++i ) {
			std::cin >> input;
			broken_pots.push_back(input);
		}
		arranged_pots = arrange(pots, broken_pots);
		for ( it = arranged_pots.begin();
			it != arranged_pots.end(); ++it ) {
			std::cout << *it << " ";
		} puts("");
	} 
	return 0;
}

