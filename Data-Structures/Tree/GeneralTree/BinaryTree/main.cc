#include <bits/stdc++.h>

typedef int TYPE;

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

	// bool insert_by_side ( const std::string& data, const char& left, const char& right ) {
	// 	return true;
	// }

	bool 
	insert_by_level ( const std::vector<int>& v, std::queue<std::shared_ptr<Node<TYPE>>>& q ) {

		int i = 0;
		if ( not root ) {
			auto newNode( std::make_shared<Node<T>>( v[i] ) );
			if ( newNode == nullptr ) return false;
			root = newNode;
			q.push( newNode );
			i = i + 1;
		}

		int lim = v.size();

		do {

			auto node = q.front();

			if ( not (i < lim) ) break;
			else if ( not node->left ) {
				node->left = std::make_shared<Node<T>>( v[i] );
				q.push( node->left );
				i = i + 1;
			}

			if ( not (i < lim) ) break;
			else if ( not node->right ) {
				node->right = std::make_shared<Node<T>>( v[i] );
				q.push( node->right );
				i = i + 1;
			}

		} while ( q.pop(), not q.empty() );

		return true;
	}

	// std::tuple<bool, T> remove () {

	// }

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

inline std::vector<TYPE>
tokenize ( const std::string& input, char delimiter ) {
	std::vector<TYPE> v;
	std::stringstream ss(input);
	std::string words;

	while ( std::getline(ss, words, delimiter) ) 
		v.push_back( std::stoi(words) );

	return v;
}

int 
main ( void ) {

	Tree<TYPE> t;

	std::string input;
	char delimiter = ' ';
	std::queue<std::shared_ptr<Node<TYPE>>> q;

	input = "1 2 3 4 5 6 7 8";
	t.insert_by_level( tokenize( input, delimiter ), q);

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

