/*
	$ // bash
	$ make main && ./main < in > out && subl ./out

	works in cycles
	inform on negative weights
	O(ve)

*/

#include <bits/stdc++.h>

template<typename vertex_t> class 
Graph {

private:

	int v, e;
	std::vector<std::vector<std::tuple<vertex_t, vertex_t, int>>> list;

	int positive_inf = std::numeric_limits<vertex_t>::max();
	int negative_inf = std::numeric_limits<vertex_t>::min();
	std::vector<int> dis;

public:

	Graph ( int v, int e ) : v( v ), e( e ) {
		list.resize( v );
		dis.resize( v );
		std::fill( dis.begin(), dis.end(), positive_inf );
	};

	void 
	insert ( vertex_t source_vertex, vertex_t destination_vertex, int edge_weight ) {
		auto value = std::make_tuple( source_vertex, destination_vertex, edge_weight );
		list[ source_vertex ].push_back( value );
	}
	
	void 
	print ( void ) {

		std::size_t i = 0;
		for ( const auto& edges : list ) {
			std::cout << i++ << " ";
			for ( const auto& vertex : edges )
				std::cout << std::get<1>( vertex ) << " ";
			std::cout << std::endl;
		} std::cout << std::endl;

	}

	std::vector<int> 
	shortest_path ( vertex_t source ) {

		dis[ source ] = 0;

		for ( const auto& edges : list ) {
			for ( const auto& vertex : edges ) {
				auto from = std::get<0>( vertex );
				auto to = std::get<1>( vertex );
				auto cost = std::get<2>( vertex );
				if ( dis[ from ] + cost < dis[ to ] and (dis[ from ] not_eq positive_inf) ) {
					dis[ to ] = dis[ from ] + cost;
				}
			}
		}

		for ( const auto& edges : list ) {
			for ( const auto& vertex : edges ) {
				auto from = std::get<0>( vertex );
				auto to = std::get<1>( vertex );
				auto cost = std::get<2>( vertex );
				if ( dis[ from ] + cost < dis[ to ] and (dis[ from ] not_eq positive_inf) ) {
					dis[ to ] = negative_inf;
					std::cout << to << std::endl;
				}
			}
		}

		return dis;
	}

};

typedef int vertex_t;

int 
main ( void ) {

	unsigned int vertices, edges;
	std::cin >> vertices >> edges;

	Graph<vertex_t> g( vertices, edges );

	int edge_weight;
	vertex_t source_vertex, destination_vertex;
	while ( edges-- ) {
		std::cin >> source_vertex >> destination_vertex >> edge_weight;
		g.insert( source_vertex, destination_vertex, edge_weight );
	}

	vertex_t source = 3;
	std::vector<int> dis = g.shortest_path( source );

	std::cout << "source: " << source << std::endl;
	for ( std::size_t i = 0; i < dis.size(); ++i )
		std::cout << i << " " << dis[ i ] << std::endl;

	return 0;
}
