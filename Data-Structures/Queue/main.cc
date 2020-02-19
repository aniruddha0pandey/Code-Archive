#include <bits/stdc++.h>

template <typename T> class 
Queue {
private:
	struct Node {
		T data;
		std::shared_ptr<Node> prev, next;
		Node ( T data ) :
			data( data ),
			prev( nullptr ),
			next( nullptr ) {} };
	unsigned int len;
	std::shared_ptr<Node> front, rear;
public:
	Queue () : 
		front( nullptr ),
		rear( nullptr ),
		len( 0 ) {}

	~Queue () noexcept = default;

	bool enQueue( const T& data ) {
		auto n( std::make_shared<Node>( data ) );
		if ( n == nullptr ) return false;
		if ( front == nullptr || rear == nullptr ) {
			this->front = n;
			this->rear = n;
		} else {
			this->rear->next = n;
			n->prev = this->rear;
			this->rear = std::move( n );
		}

		len = len + 1;

		return true;
	}

	std::tuple<bool, T> deQueue () {
		if ( len < 1 ) return std::make_tuple(false, 0);
		auto node = this->front;
		T data = node->data;
		this->front = std::move(node->next);
		len--;
		return std::make_tuple(true, data);
	}
	
	bool isEmpty () {
		return ( size() > 0 )
			? false
			: true;
	}
	
	const unsigned size() {
		return this->len;
	}

	T front_node () {
		return this->front->data;
	}

	T rear_node () {
		return this->rear->data;
	}

	friend std::ostream& operator<< ( std::ostream& os, const Queue<T>& q ) {
	    auto curr( q.front.get() );
	    while( curr != nullptr ) {
	        os << " | " << curr->data << " | ";
	        curr = curr->next.get();
	    }
	    return os;
	}

};

int 
main ( void ) {
	int data;
	Queue<int> q;

	while ( std::cin >> data ) 
		q.enQueue(data);

	std::cout << q << std::endl;
	std::cout << std::get<1>(q.deQueue()) << std::endl;
	std::cout << q << std::endl;

	return 0;
}
