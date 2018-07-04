// -std=c++1y
#include <iostream>

void subset(char arr[], int n) {
    for(int i = 0; i < (1 << n); i++) {
        for(int j = 0; j < n; j++)
            if(i & (1 << j))
                std::cout << arr[j] << " ";
        puts("");
    }
}

int main (void) {
    char arr[] = {'a', 'b', 'c'};
    int n = sizeof(arr) / sizeof(arr[0]);
    subset(arr, n);
    return 0;
}
