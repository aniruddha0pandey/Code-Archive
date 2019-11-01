#include <iostream>

int 
main() {
	int a, b;
    #ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif

    std::cin >> a >> b;
    return 0;
}
