#include <bits/stdc++.h>

template <typename T> struct 
Node {
	T data;
	std::unique_ptr<Node<T>> next;
	Node ( T data ) :
		data( data ),
		next( nullptr ) {}
};

template <typename T> class 
Stack {
private:
	std::unique_ptr<Node<T>> top;
public:
	int depth;
	
	Stack () : 
		depth( 0 ),
		top( nullptr ) {}
	
	~Stack () { clean(); }
	
	void clean () {
		while ( this->top != nullptr ) {
			this->top = std::move(this->top->next);
			this->depth--;
		}
	}

	bool push ( T data ) {
		auto newNode( std::make_unique<Node<T>>(data) );
		if ( newNode == nullptr ) return false;
		if ( this->top == nullptr ) this->top = std::move(newNode);
		else {
			newNode->next = std::move(top);
			this->top = std::move(newNode);
		}
		this->depth++;
		return true;
	}

	std::tuple<bool, T> pop () {
		if ( this->depth < 1 ) return std::make_tuple(false, 0);
		auto top( std::move( this->top ) );
		T data = top->data;
		this->top = std::move( top->next );
		this->depth--;
		return std::make_tuple(true, data);
	}

	int peek () {
		return this->top->data;
	}

	bool isEmpty () {
		if ( this->top == nullptr ) 
			return true;
		return false;		
	}

	int size () {
		return this->depth;
	}

	friend std::ostream& operator<< ( std::ostream& os, const Stack<T>& stack ) {
	    auto top( stack.top.get() );
	    while( top != nullptr ) {
	        os << " ---\n| " << top->data << " |\n ---\n";
	        top = top->next.get();
	    }
	    return os;
	}

};

int 
main ( void ) {
	
	Stack<int> stack;
	
	std::cout << "isEmpty: " << stack.isEmpty() << std::endl;

	std::cout << "push: " << stack.push( 1 ) << std::endl;
	std::cout << "push: " << stack.push( 2 ) << std::endl;
	std::cout << "push: " << stack.push( 3 ) << std::endl;
	std::cout << "push: " << stack.push( 4 ) << std::endl;
	std::cout << "push: " << stack.push( 5 ) << std::endl;

	std::cout << "size: " << stack.size() << std::endl;
	
	std::cout << stack << std::endl;

	std::cout << "pop: " << std::get<1>(stack.pop()) << std::endl;

	std::cout << stack << std::endl;
	
	std::cout << "peek: " << stack.peek() << std::endl;

	return 0;
}