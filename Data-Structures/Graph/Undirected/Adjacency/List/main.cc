// bash
// $ make main && ./main < in > out && subl ./out

#include <bits/stdc++.h>

template<typename T> class 
AdjacencyList {
private:

	std::vector< std::list<T> > list;
	std::size_t n;

public:

	AdjacencyList ( int n ) : n( n ) { list.resize( n ); }

	void 
	insert ( T e1, T e2 ) {
		list[ e1 ].push_back( e2 );
		list[ e2 ].push_back( e1 );
	}

	void 
	dfs () {
		for ( int i = 0; i < n; ++i ) {
			std::cout << i << " ";
			for ( auto const& e: list[ i ] ) {
				std::cout << e << " ";
			} puts("");
		}
	}

	void 
	bfs () {

	}

};

int 
main ( void ) {
	
	int n, m; std::cin >> n >> m;

	AdjacencyList<int> g( n );
	
	int edge1, edge2;
	while ( m-- ) {
		std::cin >> edge1 >> edge2;
		g.insert( edge1, edge2 );
	}

	g.dfs();
	g.bfs();

	return 0;
}
