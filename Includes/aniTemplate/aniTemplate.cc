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

// inline void rdi(int &n) { n=0; char c=gc(); while(c<'0' or c>'9') c=gc(); while(c>='0' and c<='9') { n=(n<<3)+(n<<1)+c-'0'; c=gc(); }}
// inline void rdl(ll &n) { n=0; char c=gc(); while(c<'0' or c>'9') c=gc(); while(c>='0' and c<='9') { n=(n<<3)+(n<<1)+c-'0'; c=gc(); }}
// inline void print(int a) { char s[20]; int i=0; do { s[i++]=a%10+'0'; a/=10; } while(a); i--; while(i>=0) pc(s[i--]); pc('\n'); }
// inline void prlong(ll a) { char s[20]; int i=0; do { s[i++]=a%10+'0'; a/=10; } while(a); i--; while(i>=0) pc(s[i--]); pc('\n'); }



