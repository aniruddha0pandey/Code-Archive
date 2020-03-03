#include <bits/stdc++.h>

template<typename T> struct 
Node {
	T data;
	std::shared_ptr<Node> left;
	std::shared_ptr<Node> right;
	Node( T data = -1 ) :
		data ( data ),
		left ( nullptr ),
		right ( nullptr ) {}
};

template<typename T> class 
BST {
private:
	std::shared_ptr<Node<T>> root;
public:

	BST () : root( nullptr ) {}
	~BST () noexcept = default;

	std::shared_ptr<Node<T>>  
	push ( std::shared_ptr<Node<T>> node, T data ) {
		auto newNode( std::make_shared<Node<T>>( data ) );
		if ( not newNode ) return false;
		if ( not root ) root = newNode;

		if ( data > root->data )
			root->right = push( node->right, data );
		else 
			root->left = push( node->left, data );

		return root;
	}

};

typedef int TYPE;

int 
main ( void ) {

	BST<int> t;

	int n; std::cin >> n;
	TYPE input;
	while ( n-- ) std::cin >> input, t.push( nullptr, input );





	return 0;
}