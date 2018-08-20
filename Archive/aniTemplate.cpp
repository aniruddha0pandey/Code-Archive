#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const double low = -1e10;
const double high = 1e10;
const long long inf = (long long) 1e18;

template<class T> inline T gcd(T x, T y) { if(!y) return x; return gcd(y, x%y); }
inline void boost(void) { std::ios::sync_with_stdio(false); std::cin.tie(0); }

int main (void) {
  boost();
  srand( (unsigned)time( NULL ) ); // Seed the random-number generator with current time so that the numbers will be different every time we run <rand()>.
  return 0;
}
