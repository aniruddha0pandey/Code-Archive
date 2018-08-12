#include <iostream>
#define SWAP(a, b) ((&(a)==&(b))?(a):((a)^=(b),(b)^=(a),(a)^=(b)))

int main () {
	int x(10), y(20);
	std::cout << SWAP(x, y);
	return 0;
}
