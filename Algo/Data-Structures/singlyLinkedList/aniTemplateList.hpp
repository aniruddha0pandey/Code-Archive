#include <bits/stdc++.h>

struct 
Node {
	int data;
	std::unique_ptr<Node> next;
	Node(int data) : data(data), next(nullptr) {}
};

class 
LinkedList {
private:
	std::unique_ptr<Node> head;
public:
	int length;
	LinkedList() : head(nullptr), length(0) {}

	// Utility Functions
	bool push( int data );
	std::tuple<bool, int> pop();
	Node* getHead();
	void clean();

	~LinkedList() { clean(); }

	friend int getLength ( const LinkedList& list );
	friend std::ostream& operator<<( std::ostream& os, const LinkedList& list );
};



