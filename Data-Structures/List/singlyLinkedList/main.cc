#include "aniTemplateList.hpp"

void 
printStatus ( const List& list ) {
	std::cout << "\n[LIST STATUS] -----------------------\n";
	std::cout << "List Size: [" << list.length << "] | ";
	std::cout << "List: [ " << list << "]\n";
	std::cout << "\n-------------------------------------\n";
}

int 
main ( int argc, char** argv ) {

	// Checking Arguments validity	
	if ( argc <= 1 ) {
		std::cout << "[ERROR]: Incomplete Arguments";
		return 1;
	}

	// Intilizing List ///////////////////////
	List list;
	//////////////////////////////////////////

	// Operation (1.0) ///////////////////////
	for ( int i = 1; i < argc; ++i )
		list.push( atoi(argv[i]) );

	printStatus( list );
	//////////////////////////////////////////

	// Operation (2.0) ///////////////////////
	std::tuple <bool, int> poppedNode = list.pop();
	bool isNotEmpty = std::get<0>(poppedNode);
	if ( isNotEmpty ) {
		std::cout << "\nPopped Node Data: [";
		std::cout << std::get<1>(poppedNode) << "]\n";
	}

	printStatus( list );
	//////////////////////////////////////////

	// Operation (3.0) ///////////////////////
	auto head = list.getHead();
	std::cout << "\nHead Data: [";
	std::cout << head->data << "]\n";
	//////////////////////////////////////////

	// Operation (4.0) ///////////////////////
	std::cout << "\nList Lenght: [";
	std::cout << getLength( list ) << "]\n";
	//////////////////////////////////////////

	// Operation (5.0) ///////////////////////
	list.clean();
	printStatus( list );
	//////////////////////////////////////////

	return 0;
}