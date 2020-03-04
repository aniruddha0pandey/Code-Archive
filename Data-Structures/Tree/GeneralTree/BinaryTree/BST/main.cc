#include <bits/stdc++.h>

template<typename T> struct 
Node {
	T data;
	std::shared_ptr<Node> parent;
	std::shared_ptr<Node> left;
	std::shared_ptr<Node> right;
	Node( T data = -1 ) :
		data ( data ),
		parent ( nullptr ),
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
	getRoot () { return root; }

	int 
	getHeight ( std::shared_ptr<Node<T>> node ) {
		if ( not node ) return 0;
		else return ( std::max( getHeight( node->left ), getHeight( node->right ) ) ) + 1;
	}

	std::shared_ptr<Node<T>> 
	insert ( std::shared_ptr<Node<T>> node, const T& data ) {

		auto newNode( std::make_shared<Node<T>>( data ) );
		if ( not newNode ) return nullptr;
		
		if ( not node ) return newNode;

		if ( data > node->data )
			node->right = insert( node->right, data );
		else 
			node->left = insert( node->left, data );

		return node;
	}

	void 
	inOrderTraverseSuccessor ( std::shared_ptr<Node<T>> node, std::vector<std::shared_ptr<Node<T>>>& inOrderList ) {
		if ( not node ) return ;
		inOrderTraverseSuccessor( node->left, inOrderList );
		inOrderList.push_back( node );
		inOrderTraverseSuccessor( node->right, inOrderList );
	}

	std::shared_ptr<Node<T>> 
	getInorderSuccessorNode ( std::shared_ptr<Node<T>> root, const T& key ) {
		
		std::vector<std::shared_ptr<Node<T>>> inOrderList;
		inOrderTraverseSuccessor( root, inOrderList );
		
		int successorIndex;
		for ( int i = 0; i < inOrderList.size(); ++i ) 
			if ( inOrderList[i]->data == key ) {
				successorIndex = i + 1;
				break;
			}
		return inOrderList[ successorIndex ];
	}

	void 
	inOrderTraverseSuccessorParent ( std::shared_ptr<Node<T>> node, const T& key, std::shared_ptr<Node<T>>& successorParentNode ) {
		if ( not node ) return ;
		inOrderTraverseSuccessorParent( node->left, key, successorParentNode );
		if ( node->right and node->left ) {
			std::cout << node->data << std::endl;
		}
		inOrderTraverseSuccessorParent( node->right, key, successorParentNode );
	}

	std::shared_ptr<Node<T>> 
	getInOrderSuccessorParentNode ( std::shared_ptr<Node<T>> root, const T& key ) {
		std::shared_ptr<Node<T>> successorParentNode;
		inOrderTraverseSuccessorParent( root, key, successorParentNode );
		return successorParentNode;
	}

	std::shared_ptr<Node<T>> 
	remove ( std::shared_ptr<Node<T>> root, std::shared_ptr<Node<T>> node, const T& key ) {

		// Key is on the Leaf Node
		if (  key == node->data and not node->left and not node->right  ) {
			std::cout << "1" << std::endl;
			return nullptr;
		}

		// Key is on parent node with two children
		else if ( key == node->data and node->left and node->right ) {
			std::cout << "2" << std::endl;

			auto inorderSuccessorNode = getInorderSuccessorNode( root, key );
			node->data = inorderSuccessorNode->data;

			auto inOrderSuccessorParentNode = getInOrderSuccessorParentNode( root, node->data );

			// std::cout << inOrderSuccessorParentNode->data << std::endl;

			// if ( inOrderSuccessorParentNode->right->data == node->data )
			// 	inOrderSuccessorParentNode->right = nullptr;
			// else if ( inOrderSuccessorParentNode->left->data == node->data )
			// 	inOrderSuccessorParentNode->left = nullptr;

		} 

		// Key is on parent node with one children on left
		else if ( key == node->data and node->left and not node->right ) {
			std::cout << "3" << std::endl;
			return nullptr;
		} 

		// Key is on parent node with one children on right
		else if ( key == node->data and not node->left and node->right ) {
			std::cout << "4" << std::endl;
			return nullptr;
		} 

		else if ( key > node->data ) {
			node->right = remove( root, node->right, key );
		} else {
			node->left = remove( root, node->left, key );
		}

		return node;
	}

	// Traversal //

	// void eulerTour () {

	// } 

	// void spiralOrder () {
		
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
	levelOrder ( std::shared_ptr<Node<T>> root ) {
		int height = getHeight( root );
		for ( int i = 1; i <= height; ++i ) {
			printLevel( root, i );
		}
	}

};

typedef int TYPE;

int 
main ( void ) {

	BST<int> t;

	TYPE input;
	int n; std::cin >> n;

	int data; std::cin >> data;
	auto root( std::make_shared<Node<TYPE>>( data ) );

	while ( --n ) std::cin >> input, t.insert( root, input );

	TYPE query; std::cin >> query;
	t.remove( root, root, query );

	t.inOrder( root ); std::cout << std::endl;
	t.preOrder( root ); std::cout << std::endl;
	t.postOrder( root ); std::cout << std::endl;
	t.levelOrder( root ); std::cout << std::endl;

	return 0;
}