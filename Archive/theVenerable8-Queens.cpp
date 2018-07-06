#include <iostream>
#include <stdlib.h>

inline bool allQueenPlaced(int N, int col) { return (col >= N); }

void print(int *board, int N) {
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < N; col++)
			std::cout << *((board + row * N) + col) << " ";
		puts("");
	}
}

bool blitz() {

}

bool nQueen(int N) {
	int board[N][N] = {};

	if ( allQueenPlaced(N, col) )
		return true;

	for (int i = 0; i < N; i++) {

	}

	return false;
}

int main(void) {
	int N;
	std::cin >> N;
	if ( nQueen(N) )
		print((int *)board, N);
	else
		std::cout << "Solution doesn't exist";	
	return 0;
}
