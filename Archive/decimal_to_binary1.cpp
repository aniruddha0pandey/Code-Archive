#include <iostream>
#define RANGE 31 //assuming 32-bit system
using namespace std;

char
bin (int n, int i) {
    while (i!=-1) (n>>i--&1) ? cout << "1" : cout << "0";
    return puts("");
}

int
main (void) {
    int T, input;
    cin >> T;
    	
    while (T--) {
    	cin >> input;
    	bin(input, RANGE);
    }

    return 0;
}

/*
Input:
1
5
453 869632 354 38 7
*/
