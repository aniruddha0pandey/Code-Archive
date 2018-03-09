#include <iostream>
#include <vector>
#define loop(L, M) for(int i = L; i < M; i++)
using namespace std;

template <typename T>
T dif_tab(T n, vector <T> &array)
{
	int save[n], sum = 0;

		while(n--)
		{
			loop(0, n)
			{
				save[i] = array[i+1] - array[i];
				array[i] = save[i];
			}
			
			sum += array[n];
		}

	return sum;
}

main()
{
	int n, temp;

		cin >> n;

	vector <int> array;

		loop(0, n)
		{
			cin >> temp;
			array.push_back(temp);
		}

		cout << dif_tab(n, array);

	return 0;
}

/*
Input:
4
1 4 9 16

Input:
5
4 8 12 16 20

Input:
4
10 29 66 127
