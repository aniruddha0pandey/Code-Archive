#include <bits/stdc++.h>

template<typename T> class 
AdjacencyList {
private:

public:

	AdjacencyList() : {}
	~AdjacencyList() noexcept = default;

	void 
	push ( int v1, int v2 ) {
		std::vector<std::list<int>> l;
		v[ v1 ].push_back( v2 );
	}

};

int 
main ( void ) {

	AdjacencyList<int> g;
	
	int n, m;
	std::cin >> n >> m;
	
	int v1, v2;
	while ( m-- ) {
		std::cin >> v1 >> v2;
		g.push( v1, v2 );
	}

	std::cout << g.dfs() << std::endl;

	return 0;
}