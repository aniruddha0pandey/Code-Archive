#include <iostream>
#define RANGE 31 //assuming 32-bit system
using namespace std;

int bin(int n, int i)
{
    while(i != -1) (n>>i--&1) ? cout << "1" : cout << "0";
}

int main()
{
    int T, input;
    
    	cin >> T;
    	
    	while (T--)
    	{
    		cin >> input;
    		
    		bin(input, RANGE);
    		
    		puts("");
		}

    return 0;
}

/*
Input:
10
0 1 2 3 4 5 6 7 8 9

Input:
5
453 869632 354 38 7
