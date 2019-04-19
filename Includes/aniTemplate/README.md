```bash
$ ./main < test.in > test.out
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
  freopen("test.in", "r", stdin);
  freopen("test.out", "w", stdout);
#endif
  std::cin >> input;
  std::cout << output;
  return 0;
}
```
```c
#include <fstream>

int main ( void ) {
  ofstream fout( getenv("OUTPUT_PATH") );
  
  fout << output << "\n";
  fout.close();
```
