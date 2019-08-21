#include <bits/stdc++.h>

int fact( int num ) {
    return (num == 1) ? 1 : num * fact(num - 1);
}

bool isPrime ( int num ) {
    if ( ((fact(num - 1) % num) + 1) == num ) {
        return true;
    } else return false;
}

int 
main ( void ) {
    int num;
    std::cin >> num;
    std::cout << isPrime(num);
    return 0;
}