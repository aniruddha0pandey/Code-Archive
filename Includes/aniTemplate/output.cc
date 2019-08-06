#include <bits/stdc++.h>

int main ( void ) {
  std::vector<int> v = {1, 2, 3, 4, 5, 6};

  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    std::cout << *it << " ";

  for(std::size_t i = 0; i < v.size(); ++i) 
      std::cout << v[i] << " "; 

  for(auto&& ele: v)
    std::cout << ele << " ";

  std::for_each(
      v.begin(), v.end(), 
      [&](auto&& ele){ std::cout << ele << " "; });
    
  std::copy(v.begin(), v.end(),
      std::ostream_iterator<int>(std::cout, " "));
      
  return 0;
}
