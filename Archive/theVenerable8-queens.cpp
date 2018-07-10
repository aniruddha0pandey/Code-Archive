// TODO : delay animation & object orientation

#include<iostream>

inline bool allQueenPlaced(int N, int col) { return (col >= N); }

inline bool repeat(int* board, int N, int i, int col) { return (*((board + i * N) + col) != 1); }

bool horizontalClear(int* board, int N, int row, int col, int i) {
	for (i = 0; i < col; i++)
		if (*((board + row * N) + i))
			return true;
	return false;
}

bool diagonalClear(int* board, int N, int row, int col, int i, int j) {
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            if(((row + col) == ( i + j)) || ((row - col) == (i - j)))
                if(*((board + i * N) + j) == 1)
                    return true;
    return false;
}

bool blitz(int* board, int N, int row, int col, int i = 0, int j = 0) {
	return (horizontalClear((int*)board, N, row, col, i) || diagonalClear((int*)board, N, row, col, i, j));
}

void placeQueen(int* board, int N, int i, int col) {
	*((board + i * N) + col) = 1;
}

void removeQueen(int* board, int N, int i, int col) {
	*((board + i * N) + col) = 0;
}

void print(int* board, int N) {
	for (int row = 0; row < N; row++) {
		for (int col = 0; col < N; col++)
			std::cout << " " << *((board + row * N) + col) << " ";
		puts("");
	}
}

bool nQueen(int* board, int N, int col = 0) {
	if ( allQueenPlaced(N, col) ) {
		print((int*)board, N);
		return true;
	} else {
		for (int i = 0; i < N; i++) {
			if ( (!blitz((int*)board, N, i, col)) && repeat((int*)board, N, i, col)) {
				placeQueen((int*)board, N, i, col);
				if ( nQueen((int*)board, N, col + 1) )
					return true;
				removeQueen((int*)board, N, i, col);
			}
		}
		return false;
	}
}

int main() {
    int N;
    std::cin >> N;
    int board[N][N] = {};
	if ( nQueen((int*)board, N) )
		std::cout << "\nProgram Stops Exploring on Solution...";
	else
		std::cout << "Solution Doesn't Exist...";
	return 0;
}
