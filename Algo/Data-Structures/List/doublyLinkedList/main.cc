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

	/////////////////////////////// Member functions ///////////////////////////////

	List () : 
		head( nullptr ),
		tail( nullptr ),
		length( 0 ) {}

	~List() { clean(); }

	void clean () {
		while ( head != nullptr ) {
			head = std::move(head->next);
			length--;
		}
	}

	/////////////////////////////// Modifiers ///////////////////////////////

	bool push_front ( int data ) {
		auto newNode( std::make_shared<Node>(data) );
		if ( newNode == nullptr ) return false;
		if ( head == nullptr && tail == nullptr ) {
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

	bool push_back ( int data ) {
		auto newNode( std::make_shared<Node>(data) );
		if ( newNode == nullptr ) return false;
		if ( head == nullptr && tail == nullptr ) {
			head = newNode;
			tail = newNode;
		} else {
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
		}
		length++;
		return true;
	}

	std::tuple<bool, int> pop_head () {
		if ( length < 1 ) return std::make_tuple(false, 0);
		auto firstNode = head;
		int data = firstNode->data;
		head = std::move(firstNode->next);
		length--;
		return std::make_tuple(true, data);
	}

	std::tuple<bool, int> pop_tail () {
		if ( length < 1 ) return std::make_tuple(false, 0);
		auto lastNode = tail;
		int data = lastNode->data;
		tail = std::move(lastNode->prev);
		length--;
		return std::make_tuple(true, data);
	}

	bool find ( int data ) {
		auto current = this->head;
		while ( current != nullptr ) {
			if ( current->data == data )
				return true;
			current = current->next;
		}
		return false;
	}

	bool erase ( int data ) {
		if ( length < 1 ) 
			return false;

		if ( data == head->data ) 
			return false;

		if ( data == tail->data ) 
			return false;

		auto slow_ptr = this->head;
		auto fast_ptr = this->head->next;

		while ( fast_ptr != nullptr ) {
			if ( fast_ptr->data == data ) {
				fast_ptr->next->prev = slow_ptr;
				slow_ptr->next = std::move(fast_ptr->next);
				return true;
			}
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
		}

		return false;
	}

	/////////////////////////////// Observers ///////////////////////////////

	int size () { return length; }

	bool isEmpty () {
		if ( length ) return true;
		else return false;
	}

	void print_forward () {
		auto current = this->head;
	    while( current != nullptr ) {
	        std::cout << current->data << ' ';
	        current = current->next;
	    } puts("");
	}

	void print_backward () {
		auto current = this->tail;
	    while( current != nullptr ) {
	        std::cout << current->data << ' ';
	        current = current->prev;
	    } puts("");
	}

	/////////////////////////////// Utility ///////////////////////////////

	bool 
	reverse () {
		return false;
	}

};

int 
main ( void ) {
	List list;
	

	return 0;
}

