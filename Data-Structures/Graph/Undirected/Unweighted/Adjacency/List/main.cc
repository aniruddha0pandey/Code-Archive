
/*
	$ // bash
	$ make main && ./main < in > out && subl ./out
*/

#include <bits/stdc++.h>

template<typename T> class 
AdjacencyList {
private:

	std::vector< std::list<T> > list;
	std::vector<bool> visited;
	std::size_t n;

public:

	AdjacencyList ( int n ) : n( n ) { 
		list.resize( n );
		visited.resize( n );
		std::fill( visited.begin(), visited.end(), false );
		for ( int i = 0; i < n; ++i ) 
			list[ i ].push_back( i );
	}

	void 
	insert ( T e1, T e2 ) {
		list[ e1 ].push_back( e2 );
		list[ e2 ].push_back( e1 );
	}

	void 
	print () {
		std::cout << "\n[LIST VIEW]: " << std::endl;
		for ( int i = 0; i < n; ++i ) {
			for ( const auto& e: list[ i ] )
				std::cout << e << " ";
			std::cout << std::endl;
		}
	}

	void 
	explore ( std::stack<T> s, T rootNode ) {

		while ( not s.empty() ) {

			T node = s.top();
			for ( const auto& e: list[ node ] )
				if ( not visited[ e ] ) {
					s.push( e );
					std::cout << e << " ";
					visited[ e ] = true;
					explore( s, e );
				}

			s.pop();

		}

	}

	void 
	dfs( T rootNode ) {
		std::cout << "\n[DFS VIEW]: " << std::endl;

		std::stack<T> s;
		s.push( rootNode );
		visited[ rootNode ] = true;
		std::cout << rootNode << " ";

		explore( s, rootNode );

	}

	void 
	bfs ( T rootNode ) {
		std::cout << "\n[BFS VIEW]: " << std::endl;
		
		std::queue<T> q;
		q.push( rootNode );
		visited[ rootNode ] = true;

		while ( not q.empty() ) {

			int node = q.front();
			for ( const auto& e: list[ node ] )
				if ( not visited[ e ] ) {
					q.push( e );
					visited[ e ] = true;
				}

			std::cout << node << " ";
			q.pop();

		}

	}

};

int 
main ( void ) {
	
	int nodes_n, edges_n; std::cin >> nodes_n >> edges_n;

	AdjacencyList<int> g( nodes_n );
	
	int node1, node2;
	while ( edges_n-- ) {
		std::cin >> node1 >> node2;
		g.insert( node1, node2 );
	}

	g.print();

	int rootNode = 0;
	g.dfs( rootNode );
	g.bfs( rootNode );

	return 0;
}
