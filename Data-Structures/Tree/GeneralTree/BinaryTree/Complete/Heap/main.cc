// https://www.hackerrank.com/challenges/jesse-and-cookies/problem

#include <bits/stdc++.h>


template <typename T, std::size_t max_size> class 
Heap {
private:
	std::size_t current_size = 0;
	std::vector<T> list;
public:

	Heap ( std::initializer_list<T> const& data ) {
		
		current_size = ensureEnoughCapacity( data.size() );
		list = data;

		// swim();
		// for ( int i = 0; i < this->current_size; ++i )
		// 	heapify( i );

	}

	std::size_t 
	ensureEnoughCapacity( std::size_t incoming_list_size ) {
		if ( incoming_list_size == max_size ) {
			std::cerr << "[WARNING]: List Limit Reached.\n";
		} else if ( incoming_list_size > max_size ) {
			std::cerr << "[ERROR]: Cannot Insert.\n";
			exit(1);
		}
		return incoming_list_size;
	}

	T 
	peek () {
		return list[0];
	}

	T 
	poll () {
		T root = list[0];
		std::swap( list[0], list[current_size - 1] );
		list.pop_back();
		// sink();
		return root;
	}

	bool 
	insertKey ( const T& data ) {
		
		current_size = ensureEnoughCapacity( current_size + 1 );
		list.push_back( data );
		
		// swim();
		// heapify( this->current_size - 1 );
		
		return true;

	}

	bool 
	insertKey ( std::initializer_list<T> const& data ) {
		
		current_size = ensureEnoughCapacity( current_size + data.size() );
		list.insert(list.end(), data.begin(), data.end());

		// swim();
		// for ( std::size_t n = data.size(), int i = 0; i < n; ++i )
		// 	heapify( n + i );
		
		return true;

	}

	void show() {
		for ( auto const& e : list ) std::cout << e << std::endl;
		// std::cout << "Height: " << this->current_size << std::endl;
		std::cout << "Height: " << list.size() << std::endl;
	}

	// bool 
	// build_heap () {

	// }

	// std::tuple<bool, T> 
	// getMin () {

	// }

	// bool 
	// heapify ( const T& e ) {
	// 	T l = 2 * e + 1;
	// 	T r = 2 * e + 2;

	// 	if ( l < current_size && list[l] < list[e] ) {

	// 	} else {

	// 	}

	// 	if ( r >= current_size && list[r] > list[e] ) {

	// 	}

	// 	// bool 
	// 	// swim () {

	// 	// }

	// 	// bool 
	// 	// sink () {
			
	// 	// }

	// }

	// bool 
	// deleteKey ( const T& data ) {

	// }

	// bool 
	// decreaseKey ( const T& data ) {

	// }

	// bool 
	// increaseKey ( const T& data ) {

	// }

	// friend std::ostream& operator<< ( std::ostream& os, const Heap<T>& t ) {

	// }

};

int 
main ( void ) {
	Heap<int, 5> h = { 1, 2, 3 };
	h.show();

	std::cout << "Poll: " << h.poll() << std::endl;
	h.show();

	// h.insertKey( 4 );
	// h.insertKey( 5 );
	// h.show();
	
	// h.insertKey({ 6, 7, 8, 9, 10 });
	// h.show();
	
	// h.deleteKey();
	
	// std::cout << h.extractMin() << std::endl;
	
	// std::cout << h << std::endl;

	return 0;
}

