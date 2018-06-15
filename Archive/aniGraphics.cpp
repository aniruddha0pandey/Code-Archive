#include <iostream>

const char vertical = 186;
const char horizontal = 205;
const char topLeft = 201;
const char topRight = 187;
const char bottomLeft = 200;
const char bottomRight = 188;

void top(int width) {
	std::cout << topLeft;

	for (int i = 0; i < width; i++)
		std::cout << horizontal;

	std::cout << topRight << std::endl;
}

void middle(int height, int width) {
	for (int i = 0; i < height; i++) {
		std::cout << vertical;

		for (int j = 0; j < width; j++)
			std::cout << " ";

		std::cout << vertical << std::endl;		
	}
}

void bottom(int width) {
	std::cout << bottomLeft;

	for (int i = 0; i < width; i++)
		std::cout << horizontal;

	std::cout << bottomRight << std::endl;
}

void box(int height, int width) {
	top(width);
	middle(height, width);
	bottom(width);
}

int main () {
	int height, width;

	std::cout << "Enter Height: ";
	std::cin >> height;
	std::cout << "Enter Width: ";
	std::cin >> width;
	puts("");

	box(height, width);
	return 0;
}
