#include <bits/stdc++.h>

template <typename T> class 
Tree {
private:
	struct Node {
		T data;
		std::shared_ptr<Node> left;
		std::shared_ptr<Node> right;
		Node ( T data ) :
			data ( data ),
			left ( nullptr ),
			right ( nullptr ) {} };
	std::shared_ptr<Node> root;
	std::shared_ptr<Node> nextSibling;
public:
	unsigned int height;

	// Base //
	
	Tree () :
		height ( 0 ),
		nextSibling ( nullptr ),
		root ( nullptr ) {}
	
	~Tree () noexcept = default;

	// Modifiers //

	// bool insert_by_side ( const T& data, char side ) {		

	// }

	// bool insert_by_level ( const T& data ) {

	// }

	// std::tuple<bool, T> remove () {

	// }

	// Utility //
	

	// Traversal //

	// void eulerTour () {

	// } 
	
	// void inOrder () {

	// }

	// void preOrder () {
		
	// }

	// void postOrder () {
		
	// }

	// void spiralOrder () {
		
	// }


};

int 
main ( void ) {
	Tree<int> tree;
	tree.insert_by_level( 1 );
	tree.insert_by_level( 2 );
	tree.insert_by_level( 3 );

	
	return 0;
}


