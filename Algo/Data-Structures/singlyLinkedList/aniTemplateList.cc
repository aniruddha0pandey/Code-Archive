#include "aniTemplateList.hpp"

#define END 0xCCCCCCCC

bool 
LinkedList::push ( int data ) {
	// Allocate memory for newNode
	auto newNode = std::make_unique<Node>(data);
	if ( newNode == nullptr ) return false;

	// Empty list check
	if ( head == nullptr ) {
		head = std::move(newNode);
	} else {
		newNode->next = std::move(head);
		head = std::move(newNode);
	}
	length++;
	return true;
}

std::tuple<bool, int> 
LinkedList::pop () {
	if ( head == nullptr ) return std::make_tuple(false, 0);
	auto topNode = std::move(head);
	int data = topNode->data;
	head = std::move(topNode->next);
	length--;
	return std::make_tuple(true, data);
}

Node* 
LinkedList::getHead (  ) {
	return head.get();
}

void 
LinkedList::clean () {
	while ( head != nullptr ) {
		head = std::move(head->next);
		length--;
	}
}

// CUSTOM FUNCTIONALITIES //

std::ostream& 
operator<< ( std::ostream& os, const LinkedList& list ) {
    Node* head = list.head.get();
    while( head != nullptr ) {
        os << head->data << ' ';
        head = head->next.get();
    }
    return os;
}

int 
getLength ( const LinkedList& list ) {
	Node* current = list.head.get();
	std::size_t length = 0;
	while ( current != nullptr ) {
		length++;
		current = current->next.get();
	}
	return length;
}















