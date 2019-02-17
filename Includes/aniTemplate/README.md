```bash
$ ./main < in.put > out.put
```
```c
#include <fstream>

int main ( void ) {
  ifstream fin("in.put");
  ofstream fout("out.put");
  fin >> input;
  fout << output;
  return 0;
}
```
```c
#include <iostream>

int main ( void ) {
#ifndef ONLINE_JUDGE
  freopen("in.put", "r", stdin);
  // freopen("out.put", "w", stdout);
#endif
  std::cin >> input;
  std::cout << output;
  return 0;
}
```
