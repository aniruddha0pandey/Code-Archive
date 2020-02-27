#include <bits/stdc++.h>

template <typename T> struct 
Node {
	T data;
	std::shared_ptr<Node<T>> left;
	std::shared_ptr<Node<T>> right;
	Node ( T data ) :
		data ( data ),
		left ( nullptr ),
		right ( nullptr ) {} 
};

template <typename T> class 
Tree {
private:
	std::shared_ptr<Node<T>> root;
public:
	unsigned int height;

	// Base //
	
	Tree () :
		height ( 0 ),
		root ( nullptr ) {}
	
	~Tree () noexcept = default;

	std::shared_ptr<Node<T>> 
	getRoot () {
		return this->root;
	}

	int 
	getHeight ( std::shared_ptr<Node<T>> node ) {
		if ( not node ) return 0;
		else return ( std::max( getHeight( node->left ), getHeight( node->right ) ) ) + 1;
	}

	// Modifiers //

	// bool insert_by_side ( const std::vector<T>& data, const char& left, const char& right ) {
	// 	return true;
	// }

	bool 
	insert_by_level ( const std::vector<T>& data, std::queue<std::shared_ptr<Node<T>>>& q ) {

		int i = 0;
		if ( not root ) {
			auto newNode( std::make_shared<Node<T>>( data[i] ) );
			if ( newNode == nullptr ) return false;
			root = newNode;
			q.push( newNode );
			i = i + 1;
		}

		int lim = data.size();

		do {

			auto node = q.front();

			if ( not (i < lim) ) break;
			else if ( not node->left ) {
				node->left = std::make_shared<Node<T>>( data[i] );
				q.push( node->left );
				i = i + 1;
			}

			if ( not (i < lim) ) break;
			else if ( not node->right ) {
				node->right = std::make_shared<Node<T>>( data[i] );
				q.push( node->right );
				i = i + 1;
			}

		} while ( q.pop(), not q.empty() );

		return true;
	}

	std::pair<bool, T> 
	remove ( T key ) {
		// std::queue<std::shared_ptr<Node<T>>>& q;
		// std::shared_ptr<Node<T>> keyNode;
		// std::shared_ptr<Node<T>> lastNode;

		// auto node = root;
		
		// if ( node->data == key ) keyNode = node;
		// lastNode = node;

		// node = node->left;

		// do {
		// 	auto node = q.front();
		// 	if ( node->data == key )
		// 		keyNode = node;


		// 	lastNode = node;
		// } while ( q.pop(), not q.empty() );

		// std::cout << typeid(root).name() << std::endl;
		auto node = root->left;
		node.reset();


		return std::make_pair( true, 0 );
	}

	// Utility //
	

	// Traversal //

	// void eulerTour () {

	// } 
	

	void 
	inOrder ( std::shared_ptr<Node<T>> node ) {
		if ( not node ) return ;
		inOrder( node->left );
		std::cout << node->data << " ";
		inOrder( node->right );
	}

	void 
	preOrder ( std::shared_ptr<Node<T>> node ) {
		if ( not node ) return ;
		std::cout << node->data << " ";
		preOrder( node->left );
		preOrder( node->right );
	}

	void 
	postOrder ( std::shared_ptr<Node<T>> node ) {
		if ( not node ) return ;
		postOrder( node->left );
		postOrder( node->right );
		std::cout << node->data << " ";
	}

	void 
	printLevel ( std::shared_ptr<Node<T>> node, unsigned int level = 1 ) {
		if ( not node ) return ;
		if ( level == 1 ) std::cout << node->data << " ";
		printLevel( node->left, level - 1 );
		printLevel( node->right, level - 1 );
	}

	void 
	levelOrder ( std::shared_ptr<Node<T>> node ) {
		int height = getHeight( root );
		for ( int i = 1; i <= height; ++i ) 
			printLevel( node, i );
	}

	// void spiralOrder () {
		
	// }

};

typedef int TYPE;

int 
main ( void ) {

	TYPE input;
	std::vector<TYPE> v;
	int n; std::cin >> n;
	while ( n-- ) std::cin >> input, v.push_back( input );
	int e; std::cin >> e;

	Tree<TYPE> t;
	std::queue<std::shared_ptr<Node<TYPE>>> q;
	t.insert_by_level( v, q );

	std::pair<bool, TYPE> element = t.remove( e );
	if ( element.first ) std::cout << element.second << std::endl;
	else std::cout << "Element not Found" << std::endl;
	
	std::shared_ptr<Node<TYPE>> root = t.getRoot();
	t.inOrder( root ); std::cout << std::endl;
	t.preOrder( root ); std::cout << std::endl;
	t.postOrder( root ); std::cout << std::endl;
	t.levelOrder( root ); std::cout << std::endl;


	// char left = 'L', right = 'R';
	// input = "6 3 L 6 8 R 3 1 L 3 5 R 1 3 X 5 6 X";
	// t.insert_by_side( input, left, right );

	return 0;
}


