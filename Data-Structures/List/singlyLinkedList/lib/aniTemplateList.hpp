#include <bits/stdc++.h>

struct 
Node {
	int data;
	std::unique_ptr<Node> next;
	Node(int data) : data(data), next(nullptr) {}
};

class 
List {
private:
	std::unique_ptr<Node> head;
public:
	int length;
	List() : head(nullptr), length(0) {}

	// Utility Functions
	bool push( int data );
	std::tuple<bool, int> pop();
	Node* getHead( const List& list );
	void clean();

	~List() { clean(); }

	friend int getLength ( const List& list );
	friend std::ostream& operator<<( std::ostream& os, const List& list );
};



