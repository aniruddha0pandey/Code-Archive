#include <iostream>
#include <vector>

bool conflict (const vector<vector<int>>& adj, vector<int>& color, int C, int N) {
  for (auto a : adj[C])
    if (color[ a ] == N) return true;
  return false;
}

bool valid (const vector<vector<int>>& adj, vector<int>& color, int V, int C, int N) {
  if (N == V + 1) return true;
  for (int i = 1; i != C + 1; ++i) {
    if ( conflict(adj, color, N, i) ) continue;
    color[ N ] = i;
    if ( valid(adj, color, V, C, N + 1) ) return true;
  }
  return false;
}

int main ( void ) {
  int T, V, C, E, V1, V2;
  std::cin >> T;
  while ( T-- ) {
    std::cin >> V >> C >> E; vector<vector<int>> adj(V + 1, vector<int>());
    while ( E-- ) {
      std::cin >> V1 >> V2;
      adj[ V1 ].emplace_back(V2);
      adj[ V2 ].emplace_back(V1);
    }
    vector<int> color(V + 1, 0);
    std::cout << valid(adj, color, V, C, 1) << std::endl;
  }
  return 0;
}
