#include <iostream>

int main (void) {
    std::string S;
    std::cin >> S;
    
    int tmp = 0;
    for (int i = 0; i < S.length(); i++)
        tmp += int(S[S.length() - i - 1] - '0') * (1 << i);
    
    std::cout << tmp;
    return 0;
}
