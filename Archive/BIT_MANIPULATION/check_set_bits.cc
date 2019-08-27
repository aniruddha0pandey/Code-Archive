#include <bits/stdc++.h>

// ------------- METHOD 4 -------------
// inline int popcount(int x){
//     int count = 0;
//     __asm__ volatile("POPCNT %1, %0;"
//         :"=r"(count)
//         :"r"(x)
//         :
//     );
//     return count;
// }

// ------------- METHOD 5 -------------
// unsigned int popcount64(unsigned long long x)
// {
//     x = (x & 0x5555555555555555ULL) + ((x >> 1) & 0x5555555555555555ULL);
//     x = (x & 0x3333333333333333ULL) + ((x >> 2) & 0x3333333333333333ULL);
//     x = (x & 0x0F0F0F0F0F0F0F0FULL) + ((x >> 4) & 0x0F0F0F0F0F0F0F0FULL);
//     return (x * 0x0101010101010101ULL) >> 56;
// }

// ------------- METHOD 6 -------------
// const unsigned int __popcount_tab[256] = {
//     0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4,1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,
//     1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
//     1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
//     2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
//     1,2,2,3,2,3,3,4,2,3,3,4,3,4,4,5,2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,
//     2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
//     2,3,3,4,3,4,4,5,3,4,4,5,4,5,5,6,3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,
//     3,4,4,5,4,5,5,6,4,5,5,6,5,6,6,7,4,5,5,6,5,6,6,7,5,6,6,7,6,7,7,8
// };

// unsigned int 
// count_set_bits_rec (unsigned int num) {
// 	int nibble = 0;
// 	if (0 == num)
// 		return __popcount_tab[0];

// 	// Find last nibble
// 	nibble = num & 0xf;

// 	// Use pre-stored values to find count
// 	// in last nibble plus recursively add
// 	// remaining nibbles.
// 	return __popcount_tab[nibble] + count_set_bits_rec(num >> 4);
// }

// ------------- METHOD 7 ( Parallel binary bit add ) -------------
// inline unsigned int bitcount32(uint32_t i) {
//   i = i - ((i >> 1) & 0x55555555);
//   i = (i & 0x33333333) + ((i >> 2) & 0x33333333);
//   return (((i + (i >> 4)) & 0xF0F0F0F) * 0x1010101) >> 24;
// }

// inline unsigned int bitcount64(uint64_t i) {
//   i = i - ((i >> 1) & 0x5555555555555555);                                                                                                  
//   i = (i & 0x3333333333333333) + ((i >> 2) & 0x3333333333333333);                                                                           
//   return (((i + (i >> 4)) & 0xF0F0F0F0F0F0F0F) * 0x101010101010101) >> 56;                                                                  
// }

// ------------- METHOD 8 -------------
// static const unsigned char BitsSetTable256[256] = 
// {
// #   define B2(n) n,     n+1,     n+1,     n+2
// #   define B4(n) B2(n), B2(n+1), B2(n+1), B2(n+2)
// #   define B6(n) B4(n), B4(n+1), B4(n+1), B4(n+2)
//     B6(0), B6(1), B6(1), B6(2)
// };

int 
main ( void ) {
	// ------------- METHOD 1 -------------
	// int i = 10110011;
	// std::cout << std::bitset<8>(i).count();

	// ------------- METHOD 2 -------------
	// int i = 5;
	// #pragma GCC target ("sse4.2")
	// std::cout << __builtin_popcount(i);
	// std::cout << __builtinl_popcount(i); // long
	// std::cout << __builtinll_popcount(i); // long long or unsigned

	// ------------- METHOD 3 -------------
	// std::uint8_t i = 0b10110011;
	// std::cout << std::popcount(i);

	// ------------- METHOD 4 -------------
	// int i = 5;
	// std::cout << popcount(5);

	// ------------- METHOD 5 -------------
	// unsigned long long i = 5;
	// std::cout << popcount64(i);	

	// ------------- METHOD 6 -------------
	// int i = 5;
	// std::cout << count_set_bits_rec(i);

	// ------------- METHOD 7 -------------
	// unsigned int i = 5;
	// std::cout << bitcount64(i);

	// ------------- METHOD 8 -------------
	// unsigned int v; // count the number of bits set in 32-bit value v
	// unsigned int c; // c is the total bits set in v

	// Option 1:
	// c = BitsSetTable256[v & 0xff] + 
	//     BitsSetTable256[(v >> 8) & 0xff] + 
	//     BitsSetTable256[(v >> 16) & 0xff] + 
	//     BitsSetTable256[v >> 24]; 

	// Option 2:
	// unsigned char * p = (unsigned char *) &v;
	// c = BitsSetTable256[p[0]] + 
	//     BitsSetTable256[p[1]] + 
	//     BitsSetTable256[p[2]] +	
	//     BitsSetTable256[p[3]];

	// To initially generate the table algorithmically:
	// BitsSetTable256[0] = 0;
	// for (int i = 0; i < 256; i++)
	//   BitsSetTable256[i] = (i & 1) + BitsSetTable256[i / 2];

	return 0;
}

