#include <bits/stdc++.h>

int main ( void ) {
  std::string line; std::vector<int> v;
  
  std::getline(std::cin, line);
  std::istringstream stream(line);
  
  while (stream >> input) v.push_back(input);

  std::copy(v.begin(), v.end(),
    std::ostream_iterator<int>(std::cout, " "));

  return 0;
}
