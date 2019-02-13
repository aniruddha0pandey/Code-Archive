#include <aniTemplate.hpp>

int
main ( void ) {
  ofstream fout( getenv("OUTPUT_PATH") );
  boost();
  int input, result;
  scan( input );

  int arr[] = {};
  int n = sizeof( arr ) / sizeof( arr[0] );
  vector<int> vect(arr, arr + n);

  srand((unsigned)time(NULL));
  fout << result << "\n";
  fout.close();
  return 0;
}
