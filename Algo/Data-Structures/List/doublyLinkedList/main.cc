// https://www.codechef.com/problems/DOUBLYLL


#include <bits/stdc++.h>

struct
Node {
	int data;
	std::shared_ptr<Node> prev;
	std::shared_ptr<Node> next;
	Node( const int& data ) :
		data( data ),
		next( nullptr ),
		prev( nullptr ) {}
};




class List {
private:
	int length;
	std::shared_ptr<Node> head;
	std::shared_ptr<Node> tail;
public:

	//  Member functions

	List () : 
		head( nullptr ),
		tail( nullptr ),
		length( 0 ) {}

	~List() { clean(); }



	// Modifiers

	int 
	size () {
		return length;
	}

	bool 
	push_front ( int data ) {
		auto newNode( std::make_shared<Node>(data) );
		if ( newNode == nullptr ) return false;
		if ( head == nullptr ) {
			head = newNode;
			tail = newNode;
		} else {
			head->prev = newNode;
			newNode->next = head;
			head = newNode;
		}
		length++;
		return true;
	}

	void 
	clean () {
		while ( head != nullptr ) {
			head = std::move(head->next);
			length--;
		}
	}


	// Observers

	void 
	print_forward () {
		auto current = head.get();
	    while( current != nullptr ) {
	        std::cout << current->data << ' ';
	        current = current->next.get();
	    } puts("");
	}

	void 
	print_backward () {
		auto current = tail.get();
	    while( current != nullptr ) {
	        std::cout << current->data << ' ';
	        current = current->prev.get();
	    } puts("");
	}

	// friend std::ostream& operator<<( std::ostream& os, const List& list ) {
	//     auto current = list.head.get();
	//     while( current != nullptr ) {
	//         os << current->data << ' ';
	//         current = current->next.get();
	//     }
	//     return os;
	// }

};

int 
main ( void ) {
	List list;
	
	// I - check for empty condition
	// if ( list.isEmpty() ) std::cout << "true";
	// else std::cout << "false";
	
	// S - returns size 
	// std::cout << list.size() << std::endl;
	
	// AF O - adds first element o, and prints List traversed both ways
	// list.push_front(1);
	// list.push_front(2);
	// list.push_front(3);
	// list.print_forward();
	// list.print_backward();

	// AL O - adds last element o, and prints List traversed both ways
	// list.push_back(x);
	// std::cout << forward::list << std::endl;
	// std::cout << backward::list << std::endl;
	
	// RF - removes the first element, returns “ListEmptyException” if empty, and print list prints “ListEmpty”
	// if ( std::get<0>(list.popHead()) )
		// std::cout << "ListEmpty" << std::endl;
	// else {
		// std::cout << forward::list << std::endl;
		// std::cout << backward::list << std::endl;
	// }
	
	// RL - removes the last element returns “ListEmptyException” if empty, and print list prints “ListEmpty”
	// if ( std::get<0>(list.popTail()) )
	// 	std::cout << "ListEmpty" << std::endl;
	// else {
	// 	std::cout << forward::list << std::endl;
	// 	std::cout << backward::list << std::endl;
	// }
	
	// F - returns the first element in the list
	// std::cout << std::get<1>(list.popHead()) << std::endl;
	
	// L - returns the last element in the list
	// std::cout << std::get<1>(list.popTail()) << std::endl;
	
	// FIND x - prints the element x if x is present in S, else prints Null
	// if ( list.find(x) )
	// 	std::cout << x << std::endl;
	// else
	// 	std::cout << "NULL" << std::endl;

	return 0;
}