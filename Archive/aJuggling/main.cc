#include <bits/stdc++.h>

unsigned
_gcd(const unsigned x, const unsigned y)
{
  return (y) ? _gcd(y, x % y) : x;
}

std::vector<int>
juggle(std::vector<int> v, int r)
{
  int gcd = _gcd(v.size(), r);
  int i, j;
  for (i = 0; i < gcd; ++i) {
    int save = v[i];
    j = i;
    for (; j + r < v.size(); j = j + r) {
      v[j] = v[j + r];
    }
    v[j] = save;
  }
  return v;
}

int
main(void)
{
  std::string line;
  std::vector<int> v;

  std::getline(std::cin, line);
  std::istringstream stream(line);

  std::copy(std::istream_iterator<int>(stream), std::istream_iterator<int>(),
            std::back_inserter(v));

  int rotation_times;
  std::cin >> rotation_times;
  std::vector<int> rotated_v = juggle(v, rotation_times);

  std::copy(rotated_v.begin(), rotated_v.end(),
            std::ostream_iterator<int>(std::cout, " "));

  return 0;
}
