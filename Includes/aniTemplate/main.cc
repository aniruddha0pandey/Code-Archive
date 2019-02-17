#include <aniTemplate.hpp>

int
main ( void ) {
#ifndef ONLINE_JUDGE
	freopen("in.put", "r", stdin);
	// freopen("out.put", "w", stdout);
#endif
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
