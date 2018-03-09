#include <iostream>
#include <cmath>
#define prime true
#define non_prime false
using namespace std;

int main()
{
	int T;

		cin >> T;

		while(T--)
		{
			int m, n;

				cin >> m >> n;

			bool input[n-m+1]{prime};

				input[0] = input[1] = {non_prime};

				for(int i = 2; i <= sqrt(n); i++)
					if(input[i])
						for(int j = 2; i*j <= n; j++)
							input[i*j] = {non_prime};

				for(int i = m; i <=n; i++)
					if(input[i])
						cout << i << endl;

				puts("");
		}

	return 0;
}

/*
This code is obscure and only work as logic.
