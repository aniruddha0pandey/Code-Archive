// bash
// $ make main && ./main < in > out && subl ./out

#include <bits/stdc++.h>

template<typename T> class 
AdjacencyList {
private:

	std::vector< std::vector<bool> > grid;
	int n;

public:

	AdjacencyList ( int n ) : n( n ) {
		grid.resize( n );
	    for ( int i = 0; i < n; ++i ) {
	        grid[i].resize( n );
	    }
	}

	void 
	insert ( T e1, T e2 ) {
		grid[ e1 ][ e2 ] = grid[ e2 ][ e1 ] = true;
	}

	void 
	dfs () {
		for ( int i = 0; i < n; ++i ) {
			for ( int j = 0; j < n; ++j ) {
				std::cout << grid[ i ][ j ] << " ";
			} puts(" ");
		}
	}

};

int 
main ( void ) {
	
	int n, m; std::cin >> n >> m;

	AdjacencyList<int> g(n);
	
	int edge1, edge2;
	while ( m-- ) {
		std::cin >> edge1 >> edge2;
		g.insert( edge1, edge2 );
	}

	g.dfs();

	return 0;
}
