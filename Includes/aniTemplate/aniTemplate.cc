#include <aniTemplate.hpp>



template <class T> inline T
gcd (T x, T y) {
  if (!y) return x;
  return gcd(y, x%y);
}

inline void
boost (void) {
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





