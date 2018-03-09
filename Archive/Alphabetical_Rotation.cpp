#include <iostream>
using namespace std;

int main()
{
  const int lower = 155;
  const int upper = 219;
	string name;
	
	cin >> name;

	for(char c : name)
	{
	    (c < 97) ? cout << char(lower - c) : cout << char(upper - c);
	}
	
	return 0;
}

/*
Input:
ABCDEFGHIJKLMNOPQRSTUVWXYZ

Input:
abcdefghijklmnopqrstuvwxyz
