#include <bits/stdc++.h>

struct 
Node {
	int data;
	Node* left;
	Node* right;
	Node( int data ) : 
		data( data ),
		left( nullptr ),
		right( nullptr ) {}
};

class
Tree {
private:
	Node* root;
public:
	Tree () : root( nullptr ) {}
	~Tree () {}

	void push ( int data ) {
		Node* newNode = new Node( data );
		if ( root == nullptr )
			root = newNode;
		else {
			if ( data <= root->data )
				push(data);
		}	
	}
};

// MAIN //

int 
main ( void ) {
	Tree tree;
	tree.push( 4 );
	tree.push( 1 );
	tree.push( 3 );
	tree.push( 4 );
	return 0;
}




