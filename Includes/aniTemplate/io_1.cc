#include <bits/stdc++.h>

int main ( void ) {
  std::string line; std::vector<int> v;
  
  std::getline(std::cin, line);
  std::istringstream stream(line);

  std::copy(std::istream_iterator<int>(stream),
    std::istream_iterator<int>(),
    std::back_inserter(v));

  std::copy(v.begin(), v.end(),
    std::ostream_iterator<int>(std::cout, " "));

  return 0;
}
