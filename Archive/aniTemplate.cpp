#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long

const int MOD = 1e9 + 7;
const double low = -1e10;
const double high = 1e10;
const long long inf = (long long) 1e18;

template<class T> inline T
gcd(T x, T y) {
  if(!y) return x;
  return gcd(y, x%y);
}

inline void boost(void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
}

void
scan (const int& n = 0) {
    // For Win32 use <_getchar_nolock();> and <_putchar_nolock(c);>
    register int c = getchar_unlocked();
    for (; c < '0' || c > '9'; c = getchar_unlocked());
    for (; c > '/' && c < ':'; c = getchar_unlocked())
        n = (n << 1) + (n << 3) + (c - '0');
    if (c == '-') n = ~(n - 1);
}

int main (void) {
  boost();
  int n;
  scan (n);
  // Seed the random-number generator with current time so that the numbers will be different every time we run <rand()>.
  srand( (unsigned)time( NULL ) );
  return 0;
}
