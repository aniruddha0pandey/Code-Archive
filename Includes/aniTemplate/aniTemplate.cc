#include <aniTemplate.hpp>

typedef int TYPE

// https://github.com/lemire/Code-used-on-Daniel-Lemire-s-blog/blob/master/2013/12/26/gcd.cpp

inline 
unsigned gcd (const unsigned x, const unsigned y) {
    if ( x == 0 ) return y;
    if ( y == 0 ) return x;
    return (y) ? gcd(y, x%y) : x;
}

inline 
void boost (void) {
  std::ios::sync_with_stdio(false);
  std::cin.tie(NULL);
}

void scan (int& n = 0) {
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

// covert delimiter separated string numbers to vector of TYPE
inline std::vector<TYPE>
tokenize ( const std::string& input, char delimiter ) {
    std::vector<TYPE> v;
    std::stringstream ss(input);
    std::string words;

    while ( std::getline(ss, words, delimiter) ) 
        v.push_back( std::stoi(words) );

    return v;
}

