#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long

#define sz(x) (ll)(x).size()

const int MOD = 1e9 + 7;

const double low = -1e10;
const double high = 1e10;

const double lowInt = INT_MIN;
const double highInt = INT_MAX;

const long long inf = (long long) 1e18;




template <class T> inline T
gcd (T x, T y) {
  if (!y) return x;
  return gcd(y, x%y);
}

inline void boost (void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
}

void
scan (int& n = 0) {
    register int c = getchar_unlocked();
 /* register wint_t c = _getchar_nolock(); */// Win32
    for (; c < '0' || c > '9'; c = getchar_unlocked());
    for (; c > '/' && c < ':'; c = getchar_unlocked())
        n = (n << 1) + (n << 3) + (c - '0');
    if (c == '-') n = ~(n - 1);
}

int main (void) {
  ofstream fout(getenv("OUTPUT_PATH"));
  boost();
  int n, result;
  scan(n);
  srand((unsigned)time(NULL));
  fout << result << "\n";
  fout.close();
  return 0;
}
