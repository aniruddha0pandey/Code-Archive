// TODO: testing

#include <iostream>
#include <cmath>
#include <algorithm>
#define TYPE i&1?c+i:c-i
using namespace std;

bool prime(int c)
{
    bool temp;

        for(int i = 2; i <= sqrt(c); i++)
        {
            if(c % i == 0)
                return false;
            else
                temp = true;
        }

    return temp;
}

char sort(int c)
{
    int d;
    
        for(int i = 0; ; i++)
        {
            c = TYPE;
    
            if(prime(c) == true)
            {   
                i++;
                d = TYPE;
                if(prime(d) == false)
                    return c;
                break;
            }
        }

    return min(c, d);
}

int main()
{
    int T, N;
    
        cin >> T >> N;
        
    string input;
        
        while(T--)
        {
            cin >> input;
            
            for(auto &c: input)
                cout << sort(c);
        }

    return 0;
}
