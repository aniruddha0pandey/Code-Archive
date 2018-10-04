#include <iostream>
#include <string>

int
main (void) {
	std::string s, newString;
	std::cin >> s;
	for (int i = 1, j = 0, tmp = s[0]; i <= s.length(); ++i) {
		if (!(tmp ^ s[i])) ++i;
		else  newString.insert(j++, 1, s[i - 1]);
		tmp = s[i];
	}
	if (newString.size()) std::cout << newString;
	else std::cout << "Empty String";
	return 0;
}

/*
INPUT : aaabccddd
OUTPUT: abd

INPUT : aa
OUTPUT: Empty String
*/
