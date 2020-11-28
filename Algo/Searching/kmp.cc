
#include <bits/stdc++.h>

inline int
lengthSuffixPrefix( int& j, const int& i, 
	const std::vector<int>& table, const std::string& pattern )
{
	while ( j > 0 and pattern[i] not_eq pattern[j] ) j = table[j - 1];
	if ( pattern[i] == pattern[j] ) ++j;
	return j;
}

std::vector<int>
preprocess( const std::string& pattern )
{
	int len = pattern.length();
	std::vector<int> table(len, 0);

	for (int j = 0, i = 1; i < len; ++i)
		table[i] = lengthSuffixPrefix(j, i, table, pattern);

	return table;
}

std::vector<int>
kmp_search( std::string text, std::string pattern )
{
	std::vector<int> table = preprocess(pattern);
	std::vector<int> match;

	int i = 0, j = 0;
	while ( i < text.length() )
	{
		if ( text[i] == pattern[j] ) 
		{ 
			++i; ++j;
			if ( j == pattern.length() )
			{
				match.push_back(i - j);
				j = 0; i = match[match.size() - 1] + 1;
			}
		}
		else
		{
			if ( j == 0 ) ++i;
			else j = table[j - 1];
		}
	}

	if ( not match.size() ) match.push_back(-1);
	return match;
}

int
main ( void )
{
	std::vector<std::pair<std::string, std::string>> input = {
		std::make_pair("abcabcdabdabcdabcdabde", "abcdabd"),
		std::make_pair("bcmalmnxyz", "mal"),
		std::make_pair("AABCCAADDEE", "FAA"),
		std::make_pair("AAAAAAAAAAAAAAAAAA", "AAAAA"),
		std::make_pair("AAAAAAAAAAAAAAAAAB", "AAAAB"),
	};

	for ( const auto& in: input )
	{
		std::string text, pattern;
		std::tie(text, pattern) = in;
		for ( const auto& e: kmp_search(text, pattern) ) 
			std::cout << e << " ";
		std::cout << std::endl;
	}

	return 0;
}


